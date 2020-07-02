    class solution{
        public:

        int findmin(){
            int n,m,low1;
            cin >> n >> m;
            vector<int> v1;
            vector<int> v2;
            vector<int> v3;
            for(int i = 0;i<n;i++) cin>v1[i];
            for(int i=0; i<m;i++) cin >> v2[i];

            sort(v1.begin(),v1.end());
            for(int i =0 ;i <m ; i++){
                low1 = lower_bound(v1.begin(), v2.end(), v2[i]);
                v3.push_back(low1);
            }
            for(auto i = v3.begin(); i < v3.end(); i++){
                cout<< *i << " ";
            }
        }
    }