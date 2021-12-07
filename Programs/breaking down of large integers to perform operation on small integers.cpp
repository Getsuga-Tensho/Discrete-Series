//#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 
  
 
long long moduloMultiplication(long long a, long long b, long long mod) 
{ 
    long long res = 0; 
    a %= mod; 
  
    while (b) 
    { 
  
        if (b & 1) 
            res = (res + a) % mod; 

        a = (2 * a) % mod; 
  
        b >>= 1;  
    } 
  
    return res; 
} 
  

int main() 
{ 
    long long a = 223; 
    long long b = 313; 
    long long m = 5005; 
    cout << moduloMultiplication(a, b, m); 
    return 0; 
} 
  
