#include <stdio.h>
#include<iostream>
using namespace std;

//using this function we are transferring the value from arr[i+1] to arr[i] 
//and appending 0 to arr[n-1]
void leftshift(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
       arr[i]=arr[i+1];
    }
    arr[n-1]=0;
}

//loop version of left shift
void leftshiftloop(int arr[],int n,int shift){
    int i,j;
    for(i=0;i<shift;i++){
        for(j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=0;
    }
}

//this function runs for how many shifts we want to transfer.
void leftshiftaux(int arr[],int n,int shift){
    int i;
    for(i=0;i<shift;i++){
        leftshift(arr,n);
    }
}

//using this function we are transferring the value from arr[i-i] to arr[i] 
//and appending 0 to arr[n-1]
void rightshift(int arr[],int n){
    int i;
    for(i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=0;
}

//this function runs for how many shifts we want to transfer.
void rightshiftaux(int arr[],int n,int shift){
    int i;
    for(i=0;i<shift;i++)
        rightshift(arr,n);
}

//this function first stores the first value of array and then
//shifts the element from arr[i+1] to arr[i] and then assigns first stored value
//to arr[n-1].
void leftrotate(int arr[],int n){
     int i;
       int temp=arr[0];
    for(i=0;i<n-1;i++){
       arr[i]=arr[i+1];
    }
      arr[n-1]=temp;
}

//this function runs for how many time we have to rotate
void leftrotateaux(int arr[],int n,int rotate){
    int i;
    for(i=0;i<rotate;i++){
        leftrotate(arr,n);
    }
}

//this function first stores the last value of array and then
//shifts the element from arr[i-1] to arr[i] and then assigns last stored value
//to arr[0].
void rightrotate(int arr[],int n){
    int i;
    int temp=arr[n-1];
    for(i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

//this function runs for how many time we have to rotate
void rightrotateaux(int arr[],int n,int rotate){
    int i;
    for(i=0;i<rotate;i++){
        rightrotate(arr,n);
    }
}
void print(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main()
{
    int Array[]={1,2,3,4};
    int size=4;
 
//   leftshiftaux(Array,size,1);
//   rightshiftaux(Array,size,1);
// leftrotateaux(Array,size,1);
rightrotateaux(Array,size,1);
   print(Array,size);

    return 0;
}
