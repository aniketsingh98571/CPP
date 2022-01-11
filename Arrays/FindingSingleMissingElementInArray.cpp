
#include<bits/stdc++.h>
using namespace std;

//For Sorted and Natural Numbered Array starting with 1
void SingleMissingElementSorted(int arr[],int length){
    int sum=0,i,sum1;
    for(i=0;i<length;i++)
        sum=sum+arr[i];
    int n=arr[length-1];
    sum1=(n*(n+1))/2;
    cout<<"Single Missing Element is "<<sum1-sum;
}

//For sorted and natural numbered array not starting with 1;
void SingleMissingElementSortedNotSerial(int arr[],int length){
    int first,last,difference,i;
    first=arr[0],last=arr[length-1];
    difference=first-0;
    for(i=0;i<length;i++){
        if(arr[i]-i==difference)
            continue;
        else
            cout<<"Missing Element is "<<i+difference;
            break;
    }
}


int main()
{
    int A[]={1,2,3,4,5,6,8,9,10,11,12};
    int B[]={6,7,9,10,11,12,13};
    SingleMissingElementSorted(A,11);
    cout<<endl;
    SingleMissingElementSortedNotSerial(B,7);

    return 0;
}