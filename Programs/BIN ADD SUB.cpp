//BInary addition and subtraction
#include<stdio.h>

int add(int a,int b)
{
	int c;
	while(b!=0)
	{
		c=(a&b)<<1;
		a=a^b;
		b=c;
	}
	return a;
}

int sub(int a,int b)
{
	int carry;
	b= add(~b,1);
	while(b!=0)
	{
		carry=(a&b)<<1;
		a=a^b;
		b=carry;
	}
	return a;
}

int main()
{
	long long n1,n2,binadd,binsub,c,k;
	printf("Input first integer value: \n");
	scanf("%d",&n1);
	printf("\nInput second integer value: \n");
	scanf("%d",&n2);
	binadd=add(n1,n2);
	binsub=sub(n1,n2);
	printf("\nBinary addition=");
	
	
	for (c = 5; c >= 0; c--)
  	{
   	 k = binadd >> c;
 
   	 if (k & 1)
   	  printf("1");
    else
      printf("0");
  }
 
  printf("\n");
printf("\nBinary subtraction= %d");
for (c =9; c >= 0; c--)
  {
    k = binsub >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
	
}
