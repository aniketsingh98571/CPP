#include <stdio.h>
#include<iostream>
using namespace std;
//using recursion
int fun (int n)
{
  if (n == 0)
    {
      return 0;
    }
  else
    return funA (n - 1) + n;
}

//using loop
int fun (int n)
{
  int i;
  int sum = 0;
  if (n == 0)
    return 0;
  else
    {
      for (i = 1; i <= n; i++)
	{
	  sum = sum + i;
	}
      return sum;
    }


}

//using generic formula
int fun (int n)
{
  if (n == 0)
    return 0;
  else
    {
      return (n * (n + 1)) / 2;
    }
}

int main ()
{
  cout << fun (5);

  return 0;
}
