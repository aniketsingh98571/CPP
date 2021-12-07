#include <stdio.h>
#include<iostream>
using namespace std;
//recursive way
int TOH(int disks,int Source, int helper, int Destination ){
    static int cnt=0;
    if(disks>0){
        cnt++;
        TOH(disks-1,Source,Destination,helper);
        cout<<"From "<<Source<<" to "<<Destination<<"\n";
        TOH(disks-1,helper,Source,Destination);
    }
    return cnt;
}
int main()
{
    int n;
    n=TOH(3,1,2,3);
    cout<<"Count is "<<n;

    return 0;
}
