#include<iostream>
using namespace std;

int fibo(int num){
	if(num==1){
		return 0;
	}
	
	else if(num==2){
		return 1;
	}
	
	else
		return (fibo(num-1)+fibo(num-2));
}

main(){
	int num;
	int i;
	cout<<"Enter the number to find fibonacci series: ";
	cin>>num;
	cout<<"The fibonacci number is: "<<fibo(num);
	cout<<endl;
	cout<<"\nThe fibonacci series is:"<<endl;
	for(i=1;i<=num;i++){
		cout<<fibo(i)<<"\t";
	}
}
