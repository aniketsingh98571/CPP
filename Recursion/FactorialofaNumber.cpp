#include<iostream>
using namespace std;
//using recursion
int Factorial(int number){
    if(number==0) return 1;
    else return fun(number-1)*number;
}

//using loop
int Factorial(int number){
    int Factorial_Product=1;
    while(number>0){
        Factorial_Product=Factorial_Product*number;
        number--;
    }
    return Factorial_Product;
}
int main ()
{
  cout << Factorial (0);

  return 0;
}
