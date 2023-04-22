//Array intersect
#include<iostream>
using namespace std;

void ArrayIntersect(int a[],int b[],int x,int y){
	int ans=0;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(a[i]==b[j]){
				ans=a[i];
				b[j]=-1234;
				cout<<ans;
				
			}
		}
	}
	return ;
}

int main(){
	int a[6]={1,2,3,4,56,7};
	int b[7]={2,3,1,5,78,91};
	
	ArrayIntersect(a,b,6,7);

	return 0;
}

