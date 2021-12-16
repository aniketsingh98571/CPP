#include <stdio.h>
#include<iostream>
using namespace std;
class Array{
    public:
    int length=0;
    int A[100];
    int i,j;
    void insert(){
        cout<<"Enter no of elements to be inserted ";
        cin>>length;
        for(i=0;i<length;i++){
            cin>>A[i];
        }
    }
    void print(){
        cout<<"Elements of Array are "<<endl;
        for(i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
    }
    void InsertAtLast(){
        int x;
        cout<<"Enter the element to be inserted at last ";
        cin>>x;
        A[length]=x;
        length++;
    }
    void InsertAtGivenIndex(){
        int index,element;
        cout<<"Enter at which index you want to insert ";
        cin>>index;
        cout<<"Enter Element which needs to be inserted ";
        cin>>element;
        if(index<length){
            for(i=length;i>index;i--){
                A[i]=A[i-1];
            }
            A[index]=element;
            length++;
        }
        else{
            cout<<"Please enter index within the array length";
        }
    }
    void DeleteFromGivenIndex(){
        int index;
        cout<<"Enter index from which element should be deleted ";
        cin>>index;
        if(index<length){
            for(i=index;i<length-1;i++){
                A[i]=A[i+1];
            }
            length--;
        }
        else
        cout<<"Please enter the index within the length";
    }
};
int main(){
    Array A;
    A.insert();
    A.InsertAtLast();
    A.InsertAtGivenIndex();
    A.DeleteFromGivenIndex();
    A.print();
}