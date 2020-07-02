#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T-- > 0){
	    int n,sum=0,flag=0;
	    cin>>n;
	    bool prime[n+1]; 
        for(int i=0;i<=n;i++){
            prime[i] = true;
        } 
        prime[0]=false;
        prime[1]=false;
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    // for(int i=2;i<=n;i++){
    //     if(prime[i]){
    //         cout<<i<<"\t";
    //     }
    // }
    int low = 2;
    int high = n;
    while(low <= high){
        if(prime[low] == true && prime[high] == true){
            sum = low + high;
             if(sum == n){
                 if(flag==0){
                 cout<<low<<" "<<high<<"\n";
                 flag=1;                     
                 }

             }
        }
        (low+high < n )? low++ : high--;
    }
    if(flag == 0){
        cout<<"-1\n";
    }
    
	}
	
	return 0;
}