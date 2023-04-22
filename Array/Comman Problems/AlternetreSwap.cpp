//here we will be swapping the alternate elements in array
#include<iostream>
using namespace std;

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
} 

void alternateSwap(int a[],int n){
	for(int i=0;i<n;i+=2){
		if(i+1<n){
			int temp = a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			//swap(a[i],a[i+1]);
		}
	}
	return;
}



int main(){
	int a[6]={3,2,4,1,-3,8};
	int b[5]={4,3,5,7,2};
	cout<<"Alternate Swap array :";
	alternateSwap(a,6);
	print(a,6);
	alternateSwap(b,5);
	print(b,5);

	return 0;
}

