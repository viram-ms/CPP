class Solution {
public:
    string countAndSay(int n) {
        int count = 1;
        string res = "1";
        if(n == 1){
            return res;
        }
        
        while(count != n){
            string output = "";
            for(int i=0;i < res.size(); i++){
                int c = 1;
                char val = res[i];
                while(i+1 < res.size() && res[i] == res[i+1]){
                    c++;
                    i++;
                }
                output += to_string(c) + val;
            }
            count++;
            res = output;
        }
        return res;
    }
};