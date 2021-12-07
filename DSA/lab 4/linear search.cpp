#include<iostream>
#include<stdlib.h>
using namespace std;
int pos=0;
int flag=0;
int linsrch(int a[],int key,int n){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"The data is on position: "<<pos+1;
	}
	else{
		cout<<"Element not found.";
	}
}

main(){
	int i, a[100],n,key;
	cout<<"Enter size of the array: ";
	cin>>n;
	
	cout<<"Enter elements:\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Enter the key to search: ";
	cin>>key;
	linsrch(a,key,n);
}

