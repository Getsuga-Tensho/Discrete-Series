#include<stdio.h>
float max(float a, float b)
{
	if(a>b)
	return a;
	
	else
	return b;
}

float min(float a, float b)
{
	if(a<b)
	return a;
	
	else
	return b;
}

float comp(float a)
{
	return (1-a);
}

main()
{
	int x[5]={100,200,300,400,500};
	float t[2][5], s[2][5], temp ,value;
	int i;
	printf("Enter the membership values of tall fuzzy set:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the membership values of %d: ",x[i]);
		scanf("%f",&temp);
		t[0][i]=x[i];
		t[1][i]=temp;
		fflush(stdin);
//		printf("\n");
	}
	
	printf("\nEnter the membership values of short fuzzy set:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the membership values of %d: ",x[i]);
		scanf("%f",&temp);
		s[0][i]=x[i];
		s[1][i]=temp;
//		printf("\n");
	}
	
	printf("\nEnter the values of member whose union you want to find:\n");
	scanf("%f",&temp);
	for(i=0;i<5;i++)
	{
		if(temp==t[0][i])
		{
			break;
		}
					
	}	
	    value=max(t[1][i],s[1][i]);
		printf("\nThe number value is:%d\n",x[i] );
		printf("\nThe union of %f of tall and %f of short membership is %f",t[1][i],s[1][i], value);
		value=min(t[1][i],s[1][i]);
		printf("\nThe intersection of %f of tall and %f of short membership is %f",t[1][i],s[1][i], value);
		value=comp(t[1][i]);
		printf("\nThe complement of %f of tall is %f: ",t[1][i], value);
		value=comp(s[1][i]);
		printf("\nThe complement of %f of short is %f: ",s[1][i], value);	
}






















