#include<bits/stdc++.h>
using namespace std;

//For Sorted Natural Numbered not starting with 1
void MultipleMissingElementSortedArray(int arr[],int length){
    int first=arr[0],difference,i;
    difference=first-0;
    for(i=0;i<length;i++){
        if(arr[i]-i!=difference){
            while(difference<arr[i]-i){
                cout<<" Multiple Missing elements are "<<i+difference;
                difference++;
            }
        }
    }
}

//For Unsorted Array using HashTable Concept.
void MultipleMissingElements(int arr[],int length){
    int max=arr[0],i;
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
        if(i==0)
            continue;
        if(arr2[i]==0)
            cout<<" Missing elements are "<<i<<endl;
    }
}
int main()
{
    
    int C[]={6,7,8,9,10,13,14,15,16};
    
    MultipleMissingElementSortedArray(C,9);

    return 0;
}