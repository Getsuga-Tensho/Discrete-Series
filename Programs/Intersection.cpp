 //Intersection
 #include<stdio.h>
 main()
 {
 	int a[4]={1,2,3,4};//Elements of A
 	int b[4]={3,4,5,6};//Elements of B
 	int c[10],j,i,z=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i]==b[j])
			{
				c[z]=a[i];
				z++;
				break;
			}
		}
	}
	
	printf("\nThe intersection set are:\t");
	for(i=0;i<z;i++)
	{
		printf("%d\t",c[i]);
	}
}
