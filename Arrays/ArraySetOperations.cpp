#include<iostream>
using namespace std;

//Works for sorted arrays
//But does not works for duplicate elements.
/*Example arr1=[2,3,3,4,5]  arr2=[1,3,5,7]*/
void Union(int arr1[],int arr2[],int len1,int len2){
    int i,j,k;
    i=j=k=0;
    int *arr3=new int[len1+len2];
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else if(arr2[j]<arr1[i])
            arr3[k++]=arr2[j++];
        else{
            arr3[k++]=arr1[i++];
            j++;
        }
    }
    for(;i<len1;i++)
        arr3[k++]=arr1[i];
    for(;j<len2;j++)
        arr3[k++]=arr2[j];
int m;
    for(m=0;m<k;m++)
        cout<<arr3[m]<<" ";
}

//Works for Sorted array.
void Intersection(int arr1[],int arr2[],int len1,int len2){
    int i,j,k;
    i=j=k=0;
    int *arr3=new int[len1+len2];
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
           j++;
        else if(arr1[i]==arr2[j]){
            arr3[k++]=arr1[i++];
            j++;
        }
    }
    
int m;
    for(m=0;m<k;m++)
        cout<<arr3[m]<<" ";


}

//arr1-arr2;
void Difference(int arr1[],int arr2[],int len1,int len2){
    int i,j,k;
    i=j=k=0;
    int *arr3=new int[len1+len2];
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else if(arr2[j]<arr1[i])
            j++;
        else{
            i++;
            j++;
        }
    }
    for(;i<len1;i++)
        arr3[k++]=arr1[i];
    
int m;
    for(m=0;m<k;m++)
        cout<<arr3[m]<<" ";
}

int main()
{
    int A[]={3,4,5,6,10};
    int len1=5;
    int B[]={2,4,5,7,12};
    int len2=5;
    Union(A,B,len1,len2);
    Intersection(A,B,len1,len2);
    Difference(A,B,len1,len2);

    return 0;
}