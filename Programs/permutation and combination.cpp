//combinations
#include<iostream>
using namespace std;
main()
{
	int n,r,i;
	long f1=1,f2=1,f3=1,p,q;
	cout<<"Combination"<<endl;
	cout<<"Enter the value of n and r"<<endl;;
	cin>>n>>r;
	for(i=1;i<=n;i++){
		f1=f1*i;
	}
	for(i=1;i<=r;i++){
		f3=f3*i;
	}
	for(i=1;i<=(n-r);i++){
		f2=f2*i;
	}
	q=f1/(f2*f3);
	p=f1/f2;
	printf("\nThe permutation P(%d,%d) = %d",n,r,p);
	printf("\nThe combination C(%d,%d) = %d",n,r,q);
}
