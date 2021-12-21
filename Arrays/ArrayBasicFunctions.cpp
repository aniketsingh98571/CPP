#include <stdio.h>
#include<iostream>
using namespace std;
int SetElementAtParticularIndex(int A[],int length,int index,int element){
    if(index>=0&&index<length){
        A[index]=element;
    }
    return A[index];
}
int GetElementAtParticularIndex(int A[],int length,int index){
    if(index>=0&&index<length){
        return A[index];
    }
}
int MaxElementInArray(int A[],int length){
    int max=A[0];
    int i;
    for(i=0;i<length;i++){
        if(A[i]>max)
            max=A[i];
        }
    return max;
    
}
int MinElementInArray(int A[],int length){
    int min=A[0];
    int i;
    for(i=0;i<length;i++){
        if(A[i]<min)
            min=A[i];
    }
    return min;
}
int SumOfArrayElements(int A[],int length){
    int sum=0; int i;
    for(i=0;i<length;i++){
        sum=sum+A[i];
    }
    return sum;
}
int AverageOfArrayElements(int A[],int length){
    int average;
  average=  SumOfArrayElements(A,length);
  return (average/length);
}
int main()
{

    int A[]={2,4,9,16,25,10};
    int length=6;
    cout<<SetElementAtParticularIndex(A,length,1,3)<<" Set Element at Index\n";
    cout<<GetElementAtParticularIndex(A,length,0)<<" Get element at particular index\n";
    cout<<MaxElementInArray(A,length)<<" Max Element in Array\n";
    cout<<MinElementInArray(A,length)<<" Min Element in Array\n";
    cout<<SumOfArrayElements(A,length)<<" Sum of Array Elements\n";
    cout<<AverageOfArrayElements(A,length)<<" Average of Array Elements";
    
    return 0;
}
