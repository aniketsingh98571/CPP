#include <stdio.h>
#include<iostream>
using namespace std;
//using recursion
int Power (int number, int subscript)
{
  if (subscript == 0)
    return 1;
  else
    {
      return Power (number, subscript - 1) * number;
    }
}

//using loop
int Power (int number, int subscript)
{
  int total_power = 1;
  while (subscript > 0)
    {
      total_power = total_power * number;
      subscript--;
    }
  return total_power;
}
/*
We can reduce the number of computations of recursive calls as:
//For Even Power
2^8=(2^2)^4=(2*2)^4;

//For Odd Power 
2^9=2*(2^2)^4=2*(2*2)^4
*/

//Optimized Algorithm
int pow(int m,int n){
  if(n==0) return 1;
  if(n%2==0) return pow(m*m,n/2);
  else return m*pow(m*m,(n-1)/2);
}

int main ()
{
  cout << Power (2, 4);

  return 0;
}