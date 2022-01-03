#include <stdio.h>
#include<iostream>
using namespace std;

int CheckSorted(int arr[],int n){
    int i;
    int flag=0;
    for(i=0;i<n-1;i++){
        if(A[i]>A[i+1])
             flag=1;
    }
    return flag;
}
int main()
{
    int A[]={1,3,2,4,5};
    int n=5;
    int i;
    i=CheckSorted(A,n);
    if(i==1)cout<<"Array is not sorted";
    else cout<<"Array is not sorted";
   
    return 0;
}
