#include<iostream>
using namespace std;

bool search(int a[], int size,int key){
	for(int i=0;i<size;i++){
			if(a[i]==key){
				return 1;
			}
	}
	return 0;
}

int main(){
	int a[10]={5,7,-2,10,22,-2,05,22,1};
	cout<<"Enter the key :";
	int key;
	cin>>key;
	
	bool found = search(a,10,key);
	
	if(found){
		cout<<"Key is present"<<endl;
	}
	else{
		cout<<"key is absent !"<<endl;
	}
	//whether 1 is present in it or not ?
	
	
	
	return 0;
}
