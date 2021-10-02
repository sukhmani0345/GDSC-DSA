void rotateArr(int arr[], int d, int n){
        // code here
        int rotate[n]={0};
        
        for(int i=0;i<d;i++){
            rotate[i]=arr[i];
        }
        int k=0;
        for(int j=d;j<n;j++){
            arr[k]=arr[j];
            k++;
        }
        int r=0;
        for(int l=k;l<n;l++){
            arr[l]=rotate[r];
            r++;
        }
    }