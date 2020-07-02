class solution{
    public:

    int seive(){
        int n,i;
        cin >> n;
        vector<int> v1;
        bool arr[n+1];
        for(i=0; i< n;i++) cin>>v1[i];
        memset(arr,true,sizeof(arr));

        for(i = 2 ; i*i <= n ; i++ ){
            if(arr[i] == true){
                for(int j = i*i ;j <=n; j += i){
                    arr[j] = false;
                }
            }
        }
        
    }
}