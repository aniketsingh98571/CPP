#include <stdio.h>
#include<iostream>
using namespace std;

//Iterative way
int BinarySearch(int A[],int length,int high,int low,int key){
    int mid;
    while(high<=low){
         mid=(high+low)/2;
         if(A[mid]==key)
            return mid;
         else if(key<A[mid])
           low=mid-1;
         else 
            high=mid+1;
        }
    return -1;
}

//Recursive way
int BinarySearchRecursive(int A[],int length,int high,int low,int key){
    int mid;
    if(high<=low){
        mid=(high+low)/2;
        if(A[mid]==key)
            return mid;
        
        else if(key<A[mid])
           return BinarySearchRecursive(A,length,high,mid-1,key);
        
        else
        return BinarySearchRecursive(A,length,mid+1,low,key);
           
    }
    return -1;
}
int main()
{
    int A[]={2,4,6,8,10};
    int n=5;
    cout<< BinarySearch(A,n,0,n-1,10)<<" Iterative Way\n";
    cout<< BinarySearchRecursive(A,n,0,n-1,10)<<" Recursive way";

    return 0;
}
