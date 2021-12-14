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




    //Increasing size of Array
     int *p,*q,i;
    p=new int[5];
    p[0]=3;p[1]=5;p[2]=3;p[3]=7;p[4]=11;
//     for(i=0;i<5;i++)
//   cout<<p[i];
   
    cout<<&p[0]<<"\n";
    q=new int[10];
    cout<<"Add "<<q<<"\n";
    for(i=0;i<5;i++)
     q[i]=p[i];
     
    // for(i=0;i<10;i++)
    // //cout<<q[i];

    //breaking the link between p and array
    delete []p;
    cout<<p<<"\n";
    cout<<"Element "<<p[0]<<"\n";
    p=q;
    cout<<p;
    q=NULL;
    return 0;
}