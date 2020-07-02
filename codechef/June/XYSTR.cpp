#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- > 0){
	    string s;
	    cin>>s;
	    stack<char> st;
	    int n = s.size();
	    int count = 0;
	    for(int i=0;i < n;i++){
	        if(st.empty()){
	            st.push(s[i]);
	        } 
	        else if(!st.empty()){
	            if(st.top() != s[i]){
	                st.pop();
	                count+=1;
	            }
	        } else{
	            st.push(s[i]);
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
