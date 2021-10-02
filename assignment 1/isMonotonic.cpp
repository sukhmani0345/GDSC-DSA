class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int len=nums.size();
        
        bool isInc=true;
        bool isDec=true;
       
            for(int j=0;j<len-1;j++){
                if(nums[j]<nums[j+1]){
                    isDec=false;
                }
                if(nums[j]>nums[j+1]){
                    isInc=false;
                }
            }
        
       return isInc || isDec;
    }
};