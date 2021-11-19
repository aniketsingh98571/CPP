#include <stdio.h>
#include<iostream>
using namespace std;
int funA(int n){
    if(n>0){
    int divide;
    divide=n%10;
    return funA(n/10)+divide;
}
    return 0;
}

int main ()
{
  cout<<funA (233);
  return 0;
}
