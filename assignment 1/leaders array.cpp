class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> arr;
        int max=a[n-1];
        
        for(int i=n-1;i>=0;i--){
           if(a[i]>=max){
               max=a[i];
               arr.push_back(a[i]);
           }
        }
        
        reverse(arr.begin(),arr.end());
            return arr;

    }
};