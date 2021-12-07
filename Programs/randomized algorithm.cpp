#include<iostream>
using namespace std;
main(){
	int a[100],n,i,key;
	cout<<"Enter the size of array:\t";
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cout<<"Enter key to search:\t";
	cin>>key;
	
	for(i=1;i<=n;i++){
		if(key==a[i]){
			cout<<"Key is found at position "<<i;
			break;
		}
		else
		if(i==n)
			cout<<"Key not found";
	}
}
