#include <stdio.h>
#include<iostream>
using namespace std;
int NestedRecursion(int number){
    if(number>100){
        return number-10;
    }
    else
    return NestedRecursion(NestedRecursion(number+11));
}
int main()
{
    cout<<NestedRecursion(95);

    return 0;
}
