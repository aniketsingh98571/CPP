#include <stdio.h>
#include<iostream>
using namespace std;
int Sum_Digit(int number){
    if(number>0){
    int divide;
    divide=number%10;
    return Sum_Digit(number/10)+divide;
}
    return 0;
}

int main ()
{
  cout<<Sum_Digit (233);
  return 0;
}
