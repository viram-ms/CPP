#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,num;
    cin>>N;
    queue<int> Q;
    for(int i=0;i<N;i++){
        cin>>num;
        Q.push(num);
    }
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int total_time=0;
    int executed_jobs=0;
    while(!Q.empty()){
        int job = Q.front();
        if(job == a[executed_jobs]){
            total_time++;
            executed_jobs++;
            Q.pop();
        } else {
            O.pop();
            Q.push(job);
            total_time++;
        }
    }
    cout<<total_time<<endl;
    return 0;
}
// print map of int and queue

    // for(auto ii=store.begin(); ii!=store.end(); ++ii){
    //    cout << (*ii).first << ": ";
    //    queue <int> inVect = (*ii).second;
    //     while(!inVect.empty()){
    //         int val = inVect.front();
    //         cout<<val<<" ";
    //         inVect.pop();
    //     }
    //    cout << endl;
    // }