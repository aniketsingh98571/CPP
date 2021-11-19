#include <stdio.h>
#include<iostream>
using namespace std;
void HeadRecursion(int number){
    if(number>0){
        
        fun(number-1);
        cout<<number<<" ";
        
    }
}

int main()
{
    
    HeadRecursion(3);
    return 0;
}