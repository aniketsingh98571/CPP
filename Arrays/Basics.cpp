#include<iostream>
using namespace std;
int main(){
    //various declaration of array
    //#1
    int A[5];   //it contains all garbage values

    //#2
    int A[5]={2,4,6,8,10};

    //#3
    int A[]={2,4,6,8,10};

    //#4
    int A[5]={2,4}  //rest elements will be zero

    //#5
    int A[5]={0}; //rest of the values will be zero

    //various ways to access elements of array.
    int A[5]={2,4,6,8,10}    //array we will be using to access elements.

    //#1
    cout<<A[2];

    //#2
    cout<<2[A];

    //#3
    cout<<*(A+2);

    //#4 we can use loops to travers each and every element of array.
    for(i=0;i<4;i++){
        cout<<A[i];
    }


    //Static and Dynamic Arrays
    //Static Array
    int A[5]={2,4,6,8,10};         //stack memory

    //Dynamic Array;
    int *p;
    p=new int[5];                  //heap memory
}