#include <stdio.h>
#include<iostream>
using namespace std;

//iterative way
int fibonacci(int number){
   int seed1=0,seed2=1,sum,iterative;
   for(iterative=2;iterative<=number;iterative++){
       sum=seed1+seed2;
       seed1=seed2;
       seed2=sum;
   }
   return sum;
}


//recursive way
int fibonacci(int number){
   if(number<=1) return number;
   else return fibonacci(number-1)+fibonacci(number-2);
}

int main()
{
cout<<fibonacci(9);
    return 0;
}