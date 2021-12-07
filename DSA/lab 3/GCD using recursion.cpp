#include<stdio.h>
int gcd(int a, int b){
	if(b==0)
	return a;
	
	else if(a==0)
	return b;
	
	else{
		return gcd(b,a%b);
	}
}

main(){
	int num,num1;
	printf("Enter two numbers to find GCD:\n");
	scanf("%d%d",&num,&num1);
	printf("GCD(%d,%d): %d",num,num1,gcd(num,num1));
}
