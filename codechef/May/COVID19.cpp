#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-- >0){
	    int n;
	    cin>>n;
        int arr[n],count = 1,min =0,max =0;
        int diff[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        diff[0] = 0;
        for(int i=1;i<n;i++){
            diff[i] = arr[i] - arr[i-1];
            if(diff[i] <= 2){
                count++;
            } else {
                if(min == 0 && max == 0){
                    min = count;
                    max = count;
                } else {
                    if(count < min){
                        min = count;
                    }
                    if(count > max){
                        max = count;
                    }
                }
                count = 1;
            }
        }
        
        if(count >= 1){
            if(min == 0 && max == 0){
                min = count;
                max = count;
            } else {
                if(count < min){
                    min = count;
                }
                if(count > max){
                    max = count;
                }
            }
        }
        
    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
