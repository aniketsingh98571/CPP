//Calculate Sum and Product of digits of a number and subtract sum from product.
/*
Example:-
n=234
sum=9;
product=24;
product-sum=15;

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;
int sum=0;
int prod=1;
while(n!=0){
    int j=n%10;
    sum=(sum+(n%10));
    prod=(prod*(n%10));
   n= n/10;
}
cout<<prod-sum;
}