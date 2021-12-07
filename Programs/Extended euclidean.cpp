//Extended Euclidean
#include<iostream>
using namespace std;
int extended_gcd(int a, int b , int *x, int *y)
{
	if(a==0)
	{
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int gcd=extended_gcd(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return gcd;
}

int main()
{
	int a, b;
	cout<<"Enter the values of a and b"<<endl;
	cin>>a>>b;
	int x,y;
	cout<<"GCD is: "<<extended_gcd(a,b,&x,&y);
	cout<<endl<<a<<"("<<x<<")"<<"+"<<b<<"("<<y<<")";
	return 0;
	}
