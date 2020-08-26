#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
	int i=low;
	int j=mid+1;
	int temp[100];
	int k;
	int index = low;
	while(i <= mid && j <=high){
		if(arr[i] < arr[j]){
			temp[index] = arr[i];
			i++;
		} else {
			temp[index] = arr[j];
			j++;
		}
		index++;
	}

	if(i > mid){
		while(j<=high){
			temp[index] = arr[j];
			j++;
			index++;
		}
	} else {
		while(i<=mid){
			temp[index] = arr[i];
			i++;
			index++;
		}
	}
	

	for(int i=low;i<=high;i++){
		arr[i]=temp[i];
	}
}


void mergesort(vector<int>& arr,int low, int high){

	if(low < high){
		int mid = (low + high) / 2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}

}

int main(){
	vector<int> arr = {4,5,2,5,6,7};
	int high = arr.size(); 
	mergesort(arr,0,high-1);
	for(int i=0;i<high;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}