class solution {
    public:
    vector<int> en;
    int go(int low,int high){
        if(low == high+1){
            return 1;
        }
        int mid = en[low];
        if(mid == high){
            return 2*go(low+1,high-1);
        } else{
            return go(low,mid) + go(mid+1,high);
        }
    }


    void scoreOfParenthesis(string &S){
        int i, n = (int)S.size();
        n = max(n,1);
        en.resize(n,0);
        stack<int> s;
        for(i=0;i<n;i++){
            if(S[i] == ')'){
                int t = s.top();
                en[t] = i;
                S.pop();
            } else{
                en.push_back(i);
            }
        }
        int x = go(0,n-1);
        cout<<x<<endl;
    }

    int main(){
        scoreOfParenthesis('(()(()))') ;
        return 0;
    }
}


// second code valid parenthesis

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st;
        int n = s.size();
        vector<int> en;
        en.resize(n,0);
        int count = 0;
        vector<int> stars;
        for(int i=0;i<n;i++){
            if(s[i] == ')'){
                if(!st.empty()){
                    st.pop();
                } else if(stars.size() > 0){
                    stars.pop_back();
                } else{
                    return false;
                }
                
            } else if(s[i] == '('){
                st.push(i);
            } else {
                stars.push_back(i);
            }
        }
        
        cout<<st.size()<<endl;
        cout<<count<<endl;
        
        while(!st.empty() && stars.size() > 0) {
            if(st.top() < stars[stars.size()-1]){
                st.pop();
                stars.pop_back();
            }
            else{
                break;
            }
        }
        if(!st.empty())
            return false;
        return true;
    }
        
        
};