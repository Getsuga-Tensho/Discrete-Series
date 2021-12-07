#include<stdio.h>
int fact(int n){
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}

main(){
	int num;
	printf("Enter the number to find the factorial: ");
	scanf("%d",&num);
	printf("Factorial of %d is %d.",num,fact(num));
}
