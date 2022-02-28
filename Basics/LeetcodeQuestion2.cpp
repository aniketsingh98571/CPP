*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{

//Number of 1 bits in a given Decimal Number
/*
n=11--->1011
No of 1's is 3

Approach:
Given 1011,
get the righmost bit using condition (n&1), if it is 1 increment the count
and make right shift by 1;
*/
int count=0;
int n;
cin>>n;
while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
}
}