*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

//Inserting an element in the sorted array.
void SortedArray(int arr[],int n,int x){
    int i=n-1;
    while(arr[i]>x){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
    n++;
    for(i=0;i<n;i++)cout<<arr[i]<<" ";
}


//Shifting negative number to left and positive number to the right of array.
void shift(int arr[],int n){
    int i=0,temp;
    int j=n-1;
    while(i<=j){
        while(arr[i]<0)i++;
        while(arr[j]>0)j--;
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int Array[]={1,5,6,8};
    int size=4;
    int Array2[]={-4,1,3,-5,6,9};
    // SortedArray(Array,size,2);
    shift(Array2,6);
    return 0;
}
