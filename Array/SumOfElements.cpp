#include<iostream>
using namespace std;

int  sum(int a[],int n){
	
	int summ=0;
	for(int i=0;i<n;i++){
		summ=summ+a[i];
	}
	
	return summ;
}


int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	
	cout<<"Sum of the elements in the array is :"<<sum(a,n);
	
	return 0;
}
