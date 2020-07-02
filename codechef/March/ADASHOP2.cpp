#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        int a,b;
        cin >>a>>b;
        // cout<<a<<b<<endl;
        // if(a==1 && b==1){
        
        if(a==1 && b==1){
        cout<<16<<endl;    
        cout<<"8 8\n7 7\n8 6\n3 1\n1 3\n6 8\n5 7\n8 4\n5 1\n1 5\n4 8\n3 7\n8 2\n7 1\n1 7\n2 8\n";
        }
        else{
            cout<<18<<endl;
            cout<<(a+b)/2<<" "<<(a+b)/2<<"\n1 1\n8 8\n7 7\n8 6\n3 1\n1 3\n6 8\n5 7\n8 4\n5 1\n1 5\n4 8\n3 7\n8 2\n7 1\n1 7\n2 8\n";
        }
        
        
    }

	return 0;
}