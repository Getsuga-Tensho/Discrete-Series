#include<iostream>
#include<iomanip>
using namespace std;
main(){
	float w=5, r=6, y=7;
	cout<<"Total number of balls ="<<w+r+y<<endl;
	float f1,f2,f3;
	f1=r/(w+r+y);
	r--;
	f2=r/(w+r+y);
	r--;
	f3=w/(w+r+y);
	w--;
	
	cout<<"Probability of getting two red balls and one white ball is ="<<setprecision(3)<<f1*f2*f3;
}
