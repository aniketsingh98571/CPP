#include <stdio.h>
#include<iostream>
using namespace std;

//The resultant array should be sorted considering some false conditions.
void ArrayMerge(int arr1[],int arr2[],int m,int n){
    int *arr3=new int[m+n];
    int i=0,j=0,k=0,p;
    //this condition is used until the either ith or jth loop comes to end.
    while(i<m&&j<n){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    //both the for loops are used if any elements are left in any of the arrays.
    for(;i<m;i++)
        arr3[k++]=arr1[i];
    for(;j<n;j++)
        arr3[k++]=arr2[j];
        
    for(p=0;p<m+n;p++)
     cout<<arr3[p]<<" ";
}

//Normal Logic, if the resultant array is not required to be sorted
void ArrayMerge2(int arr1[],int arr2[],int m,int n){
    int *arr3=new int[m+n];
    int i,j,k;
    for(i=0;i<m;i++)
       arr3[i]=arr1[i];
    for(j=0;j<n;j++)
        arr3[m+j]=arr2[j];
    for(i=0;i<m+n;i++)
        cout<<arr3[i]<<" ";
}
int main()
{
    
    int A[]={3,8,16,28,25};
    int m=5;
    int B[]={4,10,12,22,23};
    int n=5;
    ArrayMerge(A,B,m,n);
    return 0;
}
