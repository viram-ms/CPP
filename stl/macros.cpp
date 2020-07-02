#include <iostream>
#include <vector>
#include <algorithm>
#define all(c) v.begin(), v.end()
#define tr(container, it) \
for(auto it = container.begin(); it != container.end(); it++)
using namespace std;

void f(vector< int >& v) {
    int r = 0;
    vector<int>::iterator it;
    tr(v, it) {
    r += (*it);
    }
    cout<<r<<endl;
}

int main()
{
    
    vector < int > v(10);
    int  j = 20;
    for(auto i = v.begin(); i != v.end(); i ++){
         *i = j;
         j--;
    }
    
    sort(all(v));
    
    for(auto i = v.begin(); i != v.end(); i ++){
         cout<<*i<<" ";
    }
    cout<<endl;
    f(v);
    
    return 0;
}
