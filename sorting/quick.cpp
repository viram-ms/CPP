#include<iostream>
#include<vector>
using namespace std;


void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(vector<int>& arr, int low, int high){
	int pivot = arr[high];
	int i = low -1;

	for(int j=low;j<=high;j++){
		if(arr[j] < pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}


void quicksort(vector<int>& arr, int low,int high){
	if(low < high){
		int key = partition(arr,low,high);
		quicksort(arr,low,key-1);
		quicksort(arr,key+1,high);
	}
}

int main(){
	vector<int> arr = {4,5,2,5,6,7};
	int high = arr.size(); 
	quicksort(arr,0,high-1);
	for(int i=0;i<high;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}