#include<iostream>
using namespace std;

int moveZeros(int arr[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		if(arr[i]!=0){
			arr[res] = arr[i];
			res++;
		}
	}
	for(int i = res; i<n; i++){
		arr[i]=0;
		res++;
	}

	return res;
} 

int main(int argc, char const *argv[])
{
	int arr[] = {0,0,0,10,0};
	int n = sizeof(arr)/sizeof(int);

	int new_size = moveZeros(arr, n);
	for(int i=0; i<new_size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}