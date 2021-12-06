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

//optimize Code
int FibonacciArray[10];
int Fibonacci(int n){

if(n<=1){
    FibonacciArray[n]=n;
    return n;
}
else{
    if(FibonacciArray[n-2]==-1)
        FibonacciArray[n-2]=Fibonacci(n-2);
    if(FibonacciArray[n-1]==-1)
        FibonacciArray[n-1]=Fibonacci(n-1);
        
    return FibonacciArray[n-1]+FibonacciArray[n-2];
}


int main()
{
    int i;
    for(i=0;i<10;i++)
    FibonacciArray[i]=-1;
    cout<<Fibonacci(5);
cout<<fibonacci(9);
    return 0;
}