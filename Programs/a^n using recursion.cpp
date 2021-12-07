#include<iostream>
using namespace std;
int power(int a ,int b);
main(){
	int b,n,result;
	cout<<"Enter base number"<<"\t";
	cin>>b;
	
	cout<<"Enter power number (positive integer)"<<"\t";
	cin>>n;
	
	result=power(b,n);
	printf("%d^%d=%d",b,n,result);
}

int power(int b,int n)
{
	if(n==0)
	return 1;
	else
	return (b*power(b,n-1));
}
