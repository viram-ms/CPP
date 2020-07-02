#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    bool flag = false;
	    int temp = 0;
	    for(int i = 1;i<=n;i++){
	        if(temp % 2 == 0){
	            for(int j = 1;j<=n;j++){
	                cout<<n * temp + j<<" ";
	            }
            }
            else{
                for(int j = n;j>=1;j--){
                    cout<<n*temp + j<<" ";
                }
                }
            temp += 1;
            cout<<endl;
            
	    }
	}
	return 0;
}
