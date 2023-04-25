//here we are going to sort 0 and 1 ,where 0 will be at left side and 1 will be at right side


#include<iostream>
using namespace std;
void sortOne(int a[],int n){
	int left=0;
	int right=n-1;
	while(left<right){
		if(a[left]==0){
			left++;
		}
		
		if( a[right]==1 ){
			right--;
		}
		else{
			swap(a[left],a[right]);
			left++;
			right--;
		}
		
	}
	return;
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[8]={1,1,0,0,0,0,1,0};
	
	sortOne(a,8);
	print(a,8);
	
	
	return 0;
}

