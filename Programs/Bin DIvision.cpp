#include <iostream>
using namespace std;
int main()
{    
    int divisor, dividend, quotient, remainder,c,k;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient =";
    	for (c = 5; c >= 0; c--)
  	{
   	 k = quotient >> c;
 
   	 if (k & 1)
   	  printf("1");
    else
      printf("0");
  }
    cout <<endl<< "Remainder = ";
    	for (c = 5; c >= 0; c--)
  	{
   	 k = remainder >> c;
 
   	 if (k & 1)
   	  printf("1");
    else
      printf("0");
  }
    return 0;
}
