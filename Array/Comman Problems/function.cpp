#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	cout<<"Printing the array :";
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<< "Done !!!";
}

int main(){

	int arr[4]={1,2,3,4};
	
	printArray(arr,4);
	
	
	return 0;
	
}
