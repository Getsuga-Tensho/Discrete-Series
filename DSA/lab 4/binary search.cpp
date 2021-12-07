#include<iostream>
using namespace std;
int flag=0;

int binsrc(int a[],int low, int high,int val){
	int m;
	if(low<=high){
		m=(low+high)/2;
		if(val==a[m]){
			flag=m;
		}
		else if(val<a[m]){
			binsrc(a,low,m-1,val);
		}
		else{
			binsrc(a,m+1,high,val);
		}
	}
	return flag;
}

main(){
	int n,a[100],i,key;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the elements in array in ascending order:\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the key: ";
	cin>>key;
	binsrc(a,0,n-1,key);
	
	if(flag==0){
		cout<<"Data not found in array.";
	}
	else{
		cout<<"Search successful and found at location "<<flag+1;
	}
}
