//Tower of Hanoi
#include<stdio.h>
#include<conio.h>
#include<string.h>
void TOH(int n, char S, char A, char D){
	if(n>0){
		TOH(n-1,S,D,A);
		printf("Move disk %d from %c to %c\n",n,S,D);
		TOH(n-1,A,S,D);
	}
}

main(){
	int n;
	printf("Enter number of disks: ");
	scanf("%d",&n);
	TOH(n,'S','A','D');
}
