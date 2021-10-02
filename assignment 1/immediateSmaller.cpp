class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0,rightsum=0;
        int n=nums.size();
        for (int i = 0; i < n; ++i) 
    {     
        leftsum = 0; 
        for (int j = 0; j < i; j++)
            leftsum += nums[j];
  
        rightsum = 0; 
        for (int j = i + 1; j < n; j++)
            rightsum += nums[j];
  
        
        if (leftsum == rightsum)
            return i;
    }
  
    return -1;
}
    
};