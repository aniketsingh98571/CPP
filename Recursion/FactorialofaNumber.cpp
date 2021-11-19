#include<iostream>
using namespace std;
//using recursion
int fun(int n){
    if(n==0) return 1;
    else return fun(n-1)*n;
}

//using loop
int fun(int n){
    int i=1;
    while(n>0){
        i=i*n;
        n--;
    }
    return i;
}
int main ()
{
  cout << fun (0);

  return 0;
}
