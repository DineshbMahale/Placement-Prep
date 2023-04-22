//here we will see how to reverse array
//Two case: 1.Odd lenght
//  		2.Even Length

#include<iostream>
using namespace std;

//void swap(int x,int y){
//	int temp=x;
//	x=y;
//	y=temp;
//}
void reverse(int a[],int size){
	int start=0;
	int end=size-1;
	
	for(int i=0;i<size;i++){
		swap(a[start],a[end]);
		start++;
		end--;
		if(start>=end){
			break;
		}
	}
	return ;
}

void print(int a[],int size){
	cout<<endl<<"Reversed Array is : ";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}

}

int main(){
	 int a[6]={2,4,3,6,7,1};
	 int b[5]={1,4,6,3,-2};
	 
	
	 reverse(a,6);
	 reverse(b,5);
	 print(a,6);
	 print(b,5);


	return 0;
}

