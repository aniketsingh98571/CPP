#include <iostream>

using namespace std;
void FindingMinAndMaxInSingleScan(int arr[],int length){
    int max=arr[0];
    int min=arr[0];
    int i;
    for(i=0;i<length;i++){
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Min is "<<min<<endl;
    cout<<"Max is "<<max;
}
int main() {
    int A[]={1,3,4,5,6,8,9,10,12,14};
    int length=10;
    FindingMinAndMaxInSingleScan(A,length);
}