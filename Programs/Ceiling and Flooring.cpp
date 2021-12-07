#include<iostream>

using namespace std;
main()
{
	float n;
	int a,num;
	cout<<"Enter the value  ";
	cin>>n;
	cout<<n<<endl;
	a=n;

	if(a==n)
	{
		cout<<"Ceiling: "<<n<<endl;
		cout<<"Flooring: "<<n<<endl;
	}
	
	else if(n>0)
	{
		cout<<"Ceiling: "<<a+1<<endl;
		cout<<"Flooring: "<<a<<endl;
	}
	
	else
	{
		cout<<"Ceiling: "<<a<<endl;
		cout<<"Flooring: "<<a-1<<endl;
	}
}
