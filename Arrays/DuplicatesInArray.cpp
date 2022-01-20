#include <bits/stdc++.h>
using namespace std;


//For Sorted Array
void FindingDuplicates(int arr[],int length){
    int i,lastDuplicate=0;
    for(i=0;i<length-1;i++){
        if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate)
            cout<<" Duplicate Elements are "<<arr[i]<<endl;
            lastDuplicate=arr[i];
    }
}


//For Sorted Array, finding no.of duplicate elements repeated
void CountingDuplicates(int arr[],int length){
    int i,j;
    for(i=0;i<length-1;i++){
        if(arr[i]==arr[i+1]){
            j=i+1;
            while(arr[i]==arr[j])j++;
            cout<<"Element "<<arr[i]<<" is repeated "<<j-i<<" times"<<endl;
            i=j-1;
            
        }
    }
}

//For Sorted Array, finding duplicate elements with their count using Hashtable
void FindingDuplicatesUsingHashTable(int arr[],int length){
    int max,i;
    max=arr[length-1];
    int *arr2=new int[max];
    *arr2={0};
    for(i=0;i<length;i++){
        arr2[arr[i]]++;
    }
    for(i=0;i<max;i++){
        if(arr2[i]>1){
            cout<<"  element  "<<i<<" is repeated "<<arr2[i]<<" times"<<endl;
        }
    }
}

//For Unsorted Array Method-1 Time Complexity-O(n^2)
void FindingMissingElementsUnsortedArray(int arr[],int length){
    int i,j,count;
    for(i=0;i<length-1;i++){
        count=1;
        if(arr[i]!=-1){
        for(j=i+1;j<length;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        }
       if(count>1) cout<<" Element "<<arr[i]<<" is repeated "<<count<<" times"<<endl;
    }
}


//For Unsorted Array, time Complexity-O(n) using HashTable Concept.
void FindingMissingElementsUnsortedArray(int arr[],int length){
    int i,max;
    max=arr[0];
    for(i=0;i<length;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    int *arr2=new int[max];
    *arr2={0};
    for(i=0;i<length;i++){
        arr2[arr[i]]++;
    }
    for(i=0;i<=max;i++){
        if(arr2[i]>1){
            cout<<"element "<<i<<" is repeated "<<arr2[i]<<" times "<<endl;
        }
    }
}


int main()
{
    
    int A[]={3,6,8,8,10,12,15,15,15,20};
    int length=10;
    int A[]={8,3,6,4,6,5,6,8,2,7};
    int length=10;
    FindingMissingElementsUnsortedArray(A,length);
    FindingDuplicates(A,length);
    

    return 0;
}