//Q- find out the max and min number from the array
#include<iostream>
using namespace std;

int getMax(int a[],int n){
	
	int maxx = INT_MIN;
	for(int i=0;i<n;i++){
		
		maxx=max(maxx,a[i]);
//		if(a[i]>max){
//			max=a[i];
//here we are using inbuilt function
		maxx=max(maxx,a[i]);
}
	return maxx;
	//cout<<"Max value from the Array is : "<<max;
}

int getMin(int a[],int n){
	
	int minn=INT_MAX;
	
	for(int i=0;i<n;i++){
//		if(a[i]<min){
//			min=a[i];
//here we are using inbuilt function
		minn=min(a[i],minn);
	
		
	}
	
	return minn;
}

int main(){
	int size;
	cout<<"Give the number of elements : ";
	cin>>size;
	int a[100];
	
//taking input into array
	cout<<"Enter the elements: "
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	cout<<"Maximum number from the array is :"<<getMax(a,size)<<endl;
	cout<<"Minimum number from the array is :"<<getMin(a,size)<<endl;
	
	
	
	return 0;
}
