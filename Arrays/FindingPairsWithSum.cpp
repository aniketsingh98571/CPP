#include <iostream>

using namespace std;


//Method-1 Time Complexity-O(n^2)
void FindingPairs(int arr[],int length,int sum){
    int i,j;
    for(i=0;i<length-1;i++){
        for(j=i+1;j<length;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Pairs are "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
    
}

//Method-2 Using HashTable, Time Complexity-O(n)
void FindingPairs2(int arr[],int length,int sum){
    int i,max;
    max=arr[0];
    for(i=0;i<length;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    int *arr2=new int[max];
    *arr2={0};
    
    for(i=0;i<length;i++){
        if(arr2[sum-arr[i]]!=0){
            cout<<"Pairs are "<<arr[i]<<" and "<<sum-arr[i]<<endl;
        }
        arr2[arr[i]]++;
    }
}
int main() {
    int A[]={6,8,3,10,16,7,5,2,9,14};
    int length=10;
    FindingPairs(A,length,10);
}