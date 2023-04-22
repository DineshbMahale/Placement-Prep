//Q.You have given an array of size n where n=(2m+1)[which is obviously a odd number], in that array m numbers will occur twicely and 
//single number(unique number will occur will appear only once , we have to find that unique number.

#include<iostream>
using namespace std;

int unique(int a[],int n){
	int ans=0;
	//we will be using xor operator here
	for(int i=0;i<n;i++){
		ans=ans^a[i];
		
	}
	return ans;
}

int main(){
	int a[5]={1,2,2,1,4};
	
	cout<<"Unique number is : ";
   	cout<<unique(a,5);


	return 0;
}

