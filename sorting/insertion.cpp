#include<iostream>
#include<vector>
using namespace std;


void insertion(vector<int>& arr, int low,int high){

	int n = high;
	int i=1;
	for(int i=1;i<=n;i++){
	    int temp = arr[i];
	    int j = i-1;
	    while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
	    arr[j+1] =temp;
	}
}


int main(){
	vector<int> arr = {4,3,4,5,6,7,2};
	int high = arr.size(); 
	insertion(arr,0,high-1);
	for(int i=0;i<high;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}