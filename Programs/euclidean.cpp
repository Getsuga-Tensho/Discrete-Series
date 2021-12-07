//Euclidean Algorithm
#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,r;
	cout<<"Enter the positive value of x and y:";
	cin>>x>>y;
	a=(x>y)?x:y;
	b=(x<y)?x:y;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	cout<<"GCD is"<<a;
	return 0;
}
