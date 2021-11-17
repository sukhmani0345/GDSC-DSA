long long toh(int N, int from, int to, int aux) {
        // Your code here
        int count=0;
     if(N<=0){
         return 0;
     }
    if(N==1)
    {   count++;
        cout<<"move disk "<<N<<" from rod "<<from<<" to "<<"rod "<<to<<endl;
        
        return 1;
    }
    
    count+=toh(N-1 , from , aux , to);
    count++;
    cout<<"move disk "<<N<<" from rod "<<from<<" to "<<"rod "<<to<<endl;
    
    
    count+=toh(N-1 , aux , to , from);
    }

};