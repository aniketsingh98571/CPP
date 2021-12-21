#include <stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int A[]={1,3,2,4,5};
    int n=5;
    int i;
    int flag=0;
    for(i=0;i<5;i++){
        if(A[i]<=A[i+1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    
    return 0;
}
