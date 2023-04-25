#include<iostream>
using namespace std;
void sort(int a[],int n){
	int left=0;
	int mid =0;
	int right=n-1;
	
	while(mid<=right){
		if(a[mid]==0){
			swap(a[left],a[mid]);
			left++;
			mid++;
			}
		
		else if(a[mid]==1){
			mid++;
		}
		else if(a[mid]==2){
			swap(a[mid],a[right]);
			right--;
		}
		
	}

}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
int a[8]={1,2,0,0,2,1,0,1};
	
	sort(a,8);
	print(a,8);

	return 0;
}

