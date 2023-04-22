#include<iostream>
using namespace std;

int main(){
//	int arr[10];
//	
//	cout<<"element at index 30 is: "<<arr[8 ];

	int arr[3]={5,7,11};
	cout<<"value of 2 index:"<<arr[2]<<endl;
	
	int third[15]={2,7};
	//print the array
	cout<<"printing the array : ";
	int n=15;
	for(int i=0 ;i<n;i++){
		cout<<third[i]<<",";
	}
	cout<<endl;
	int fourth[10]={0};
	int k=10;
	for(int i=0 ;i<k;i++){
		cout<<fourth[i]<<",";
	}


	return 0;
}
