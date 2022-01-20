/*
Test Cases
A=[1,2,3,4]
O/P=[2,1,4,3]

B=[1,2,3,4,5]
O/P=[2,1,4,3,5]
*/

#include <bits/stdc++.h>
using namespace std;
void FindMultiple(int arr[],int length){
    int i=0,j,temp,temp2;
     if(length%2!=0){
        temp2=arr[length-1];
    }
    while(i<length){
        j=i+1;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i=i+2;
    }
    if(length%2!=0)
        arr[length-1]=temp2;
    for(i=0;i<length;i++)
        cout<<arr[i]<<" ";
    
}

int main()
{
    int A[]={1, 2,3,4,5,6,7};
    int length=7;
    FindMultiple(A,length);

    return 0;
}