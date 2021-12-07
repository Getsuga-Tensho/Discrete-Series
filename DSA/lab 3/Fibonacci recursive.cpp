#include<stdio.h>
int fibo(int n){
	if(n==0)
		return 0;
	else if(n==1 || n==2)
		return 1;
	else
		return (fibo(n-1)+fibo(n-2));
}

main(){
	int num;
	printf("Enter the term till which fibonacci number series display: ");
	scanf("%d",&num);
	printf("The series is:\n");
	for(int i=0; i<=num; i++){
		printf("%d\t",fibo(i));
	}
	
	printf("\nThe term of fibonacci sreies is: %d",fibo(num));
}

