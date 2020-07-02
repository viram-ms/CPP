#include <bits/stdc++.h> 
using namespace std; 

void nextGreatest(int arr){
    stack<int> s;
    s.push(arr[0]);

    int n = arr.length();

    for(int i = 1 ;i < n ;i ++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }

        while(!s.empty && s.top() < arr[i]){
            int temp = s.top();
            cout<<s.top()<<"-->"<<arr[i]<<endl;
            s.pop();
        }

        s.push(arr[i]);
    }

    while(!s.empty()){
        int temp = s.top();
        cout<<s.top()<<"-->"<<"-1"<<endl;
        s.pop();
    }
}

int main(){
    int arr[] = {4,5,2,25};
    nextGreatest(arr);
    return 0;
}