#include<iostream>
using namespace std;

void update(int a[],int n){
	
	cout<<"Inside the function "<<endl;
	
	//updating the value
	a[0]=120;
	//printing the array
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
	
	
	cout<<"Going back to main function"<<endl;
	 
}

int main(){
	int a[3]={1,2,3};
	
	update(a,3);
	
	//printing the array
	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
