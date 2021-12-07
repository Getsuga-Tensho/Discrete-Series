//Cartesian Product

#include<stdio.h>
main()
 {
 	int a[4]={1,2};//Elements of A
 	int b[4]={3,4};//Elements of B
 	int c[10],j,i,z=0;
 	
 	printf("The cartesian product are:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t(%d,%d)",a[i],b[j]);
		}
	}
}
