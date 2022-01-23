#include <bits/stdc++.h>
using namespace std;

//Method -1,but do not cover one edge case ie when you have to find the unique element
//which is equal to the length of array
void FindUnique(int arr[],int length){
    int i,max=arr[0];
    for(i=0;i<length;i++){
        if(arr[i]>max)
            max=arr[i];
        
    }
    int *arr2=new int[max];
    *arr2={0};
    for(i=0;i<length;i++){
        arr2[arr[i]]++;
    }
    for(i=0;i<max;i++){
        if(arr2[i]==1)
            cout<<i<<" ";
    }
    
}
//Method-2
//In XOR operation, the similar elements XOR becomes zero, for e.g 3^3=0 and 0^3=3;
void FindUnique(int arr[],int length){
   int i,ans=0;
   for(i=0;i<length;i++)
    ans=ans^arr[i];
    
    cout<<ans;
}


int main()
{
    int A[]={3,7,2,2,4,3,4};
    int lenght=7;
    FindUnique(A,lenght);
    

    return 0;
}