#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- >0){
	    int n;
	    cin>>n;
	    if(n == 1 || n == 2 || n==3){
	        cout<<0<<endl;
	    } else {
	        int temp = 0;
	        int count = 0;
	        while(n > 3){
	           if(n % 2==0){
	               n = n -2;
	               count += n/2;
	           } else {
	               n = n - 3;
	               count += n / 2;
	           }
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}
