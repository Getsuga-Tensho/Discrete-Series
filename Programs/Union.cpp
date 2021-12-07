 //1. Union
 #include<stdio.h>
main()
 {
 	int a[4]={1,2,3,4};//Elements of A
 	int b[4]={3,4,5,6};//Elements of B
 	int c[10],j,i,k=0,d=0,z=0;
	for(i=0;i<4;i++)
	{
		c[i]=b[i];
		d++;
		z++;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[j]==a[i])
			{
				k++;
				break;
			}
		}
		if(k==0)
		{
			c[d]=a[i];
			d++;
			z++;
		}
	}	
	printf("\nThe union is:\t");
	for(i=0;i<z;i++)
	printf("%d\t", c[i]);
 }
