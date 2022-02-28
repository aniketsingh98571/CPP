/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Printing Numbers from 1 to n
   int i,n;
   cout<<"Enter the Number";
   cin>>n;
   for(i=1;i<=n;i++){
       cout<<i<<endl;
   }
   cout<<endl;
   
   
   //Another Way of Writing For Loop.
   //Again Printing numbers from 1 to n;
   int j=1;
   for(;;){
       if(j<=n){
           cout<<j<<endl;
       }
       else{
           break;
       }
       j++;
   }
   
   cout<<endl;
   
   //Using Multiple Variables in for Loop
   int a,b;
   for(a=1,b=1;a<=n&&b<=n;a++,b++){
       cout<<a<<" "<<b<<endl;
   }
   cout<<endl;
   
   //Sum of Numbers from 1 to n;
   int k;
   int sum=0;
   for(k=1;k<=n;k++){
       sum=sum+k;
   }
   cout<<"Sum of N Numbers is "<<sum;
   cout<<endl;
   
   //Fibonacci Series
   int fib;
   cin>>fib;
   int x=0,y=1,l;
   int sum1=0;
   if(fib==0||fib==1)
      cout<<fib;
else{
    for(l=0;l<fib;l++){
        sum1=x+y;
        x=y;
        y=sum1;
    }
    cout<<" Fibonacci is "<<sum1;
}
cout<<endl;
//Check Prime
int prime;
cin>>prime;
int t;
int flag=0;
for(t=2;t<prime;t++){
    if(prime%t!=0){
        flag=0;
    }
    else{
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<" Prime";
    
}
else{
    cout<<" Not Prime";

}

cout<<endl;
//Use of Continue Statement

for( int b=0;b<5;b++){
    cout<<"Hi"<<endl;
    cout<<"Hey"<<endl;
    continue;
    cout<<"Idhar toh aa";
}
}