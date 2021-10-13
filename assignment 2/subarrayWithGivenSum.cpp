vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> a={-1};
        int sum=0;
        for(int i=0;i<n;i++){
            sum=arr[i];
            for(int j=i+1;j<=n;j++){
                if(sum==s){
                    a={i+1,j};
                    return a;
                }
                if(sum>s || j==n){
                    break;
                }
                sum+=arr[j];
            }
        }
        return a;
    }