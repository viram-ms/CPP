#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;


long long int getOnes(long long int n){

    long long int ones=0;
    while(n!=0){
        n = n & (n-1);
        ones++;                        
    }
    return ones;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t;
    cin >> t;
    
    while(t--){
        
        long long int n,q,temp;
        cin >>n>>q;
        long long int evens=0,odds=0;
        
       for (long long int i = 0; i < n; i++) {
            
            cin>>temp;
            long long int ones = getOnes(temp);            
            if(ones%2 == 0){
                evens++;
            }else{
                odds++;
            }
            
       }
       
       for (int i = 0; i < q; i++) {
            
            cin>>temp;
            long long int ones = getOnes(temp);            
            if(ones%2 == 0){
                std::cout <<evens<<' '<<odds<<"\n";
            }else{
                std::cout <<odds<<' '<<evens<<"\n";
            }
            
       }
       
       
        
    }

	return 0;
}