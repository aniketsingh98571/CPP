#include <stdio.h>
#include<iostream>
using namespace std;
double e (int variable, int terms)
{
  static double power = 1;
  static double factorial = 1;
  double result;
  if (terms == 0)
    return 1;
  else
    {
      result = e (variable, terms - 1);
      power = power * variable;
      factorial = factorial * terms;
      return result + power / factorial;
    }

}//O(n^2)


//Optimized Code
double e(int variable,int terms){
 static double result;
 if(terms==0)
  return result;
  else{
      result=1+variable*result/terms;
      e(variable,terms-1);
  }
    
}//O(n)

int main ()
{
  cout << e (1, 10);
  return 0;
}
