class Solution {
public:
    void dfs(vector<int> nos, int n,int level,string str, vector<string>& result, map <int , vector<string> > mp){
        if(level >= n){
            return ;
        }
        
        if(level == n - 1){
            vector<string> ans(mp[nos[level]].size(), str);
            for(int i=0;i<mp[nos[level]].size(); i++){
                ans[i] = ans[i] + mp[nos[level]][i];
                result.push_back(ans[i]);
            }
        }
        
        for(auto i = mp[nos[level]].begin(); i!= mp[nos[level]].end(); i++){
            dfs(nos, n, level+1, str+*i,result,mp);
        } 
    }
    
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<int> nos;
        map <int , vector<string> > mp;
        mp[2].push_back({'a'});
        mp[2].push_back({'b'});
        mp[2].push_back({'c'});

        mp[3].push_back({'d'});
        mp[3].push_back({'e'});
        mp[3].push_back({'f'});

        mp[4].push_back({'g'});
        mp[4].push_back({'h'});
        mp[4].push_back({'i'});

        mp[5].push_back({'j'});
        mp[5].push_back({'k'});
        mp[5].push_back({'l'});

        mp[6].push_back({'m'});
        mp[6].push_back({'n'});
        mp[6].push_back({'o'});

        mp[7].push_back({'p'});
        mp[7].push_back({'q'});
        mp[7].push_back({'r'});
        mp[7].push_back({'s'});

        mp[8].push_back({'t'});
        mp[8].push_back({'u'});
        mp[8].push_back({'v'});

        mp[9].push_back({'w'});
        mp[9].push_back({'x'});
        mp[9].push_back({'y'});
        mp[9].push_back({'z'});

        
        for(auto no: digits){
            int val = int(no);
            nos.push_back(val - 48);
        }
        vector <string> result;
        dfs(nos,n,0,"",result, mp);
        return result;
    }
};