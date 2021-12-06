#include <stdio.h>
#include<iostream>
using namespace std;

//brute force
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int combination(int n,int r){
    int number,rate,difference;
    number=fact(n);
    rate=fact(r);
    difference=fact(n-r);
    return number/(rate*difference);
}


//recursive way using pascal's triangle
int combination(int n,int r){
    if(r==0||r==n)
    return 1;
    else
    return combination(n-1,r-1)+combination(n-1,r);
}
int main()
{
    cout<<combination(4,3);
   
    

    return 0;
}
