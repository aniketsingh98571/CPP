#include <stdio.h>
#include<iostream>
using namespace std;
int Array(int A[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(key==A[i]){
            return i;
        }
        
         
        }
       return -1;
}
int ImprovedTechnique(int A[],int n,int key){
    int i;
    int temp;
    for(i=0;i<n;i++){
        if(key==A[i]){
            temp=A[i];
            A[i]=A[i-1];
            A[i-1]=temp;
            return i-1;
        }
    }
    return -1;
}
int main()
{
    int n=5;
    int A[]={2,4,6,8,10};
    int key=6;
    cout<<Array(A,n,key)<<"\n";
    cout<<ImprovedTechnique(A,n,key);
    return 0;
}
