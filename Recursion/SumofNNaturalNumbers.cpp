#include <stdio.h>
#include<iostream>
using namespace std;
//using recursion
int Sum_Natural_Number (int number)
{
  if (number == 0)
    {
      return 0;
    }
  else
    return Sum_Natural_Number (number - 1) + n;
}

//using loop
int Sum_Natural_Number (int number)
{
  int iterate;
  int sum = 0;
  if (number == 0)
    return 0;
  else
    {
      for (iterate = 1; iterate <= number; iterate++)
	{
	  sum = sum + iterate;
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
