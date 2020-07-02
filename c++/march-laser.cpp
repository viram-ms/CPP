#include <iostream>
#include <vector>
#include <map> 
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	   long long int N, Q,val,counter,x1,x2,y,pt1_x,pt1_y,pt2_x,pt2_y,max_pts_y,min_pts_y,max_pts_x,min_pts_x;
	   vector<long long int> A;
	   vector<long long int> B;
	    cin>>N>>Q;
	    for(long long int i=0;i<N;i++){
	        cin>>val;
	       A.push_back(i+1);
	       B.push_back(val);
	    }
        for(int i=0;i<Q;i++){
            counter =0;
            cin>>x1>>x2>>y;
            for(int j=0;j<N-1;j++){
                pt1_x = A[j];
                pt1_y = B[j];
                pt2_x = A[j+1];
                pt2_y = B[j+1];
                max_pts_y = std::max(pt1_y,pt2_y);
                min_pts_y = std::min(pt1_y,pt2_y);
                max_pts_x = std::max(pt1_x,pt2_x);
                min_pts_x = std::min(pt1_x,pt2_x);
                if (min_pts_y <= y && y <= max_pts_y){
                  if(std::max(x1,x2) >= max_pts_x && std::min(x1,x2) <=min_pts_x){
                    if(x2!=pt1_x || x1!=pt2_x){
                        counter = counter + 1 ; 
                    }
                  }
                }
            }
              cout<<counter<<endl;     
        }
	}
	return 0;
}


                
        
        
