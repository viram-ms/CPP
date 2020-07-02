#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int lost = 0;
	    for(int i = 0;i<n;i++){
	        if(arr[i] > k){
	            lost += arr[i] - k;
	        }
	    }
	    cout<<lost<<endl;
	}
	return 0;
}
