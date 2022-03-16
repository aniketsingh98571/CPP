#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Approach 1
    char A[]="Python";
    char B[10];
    int i,j;
    for(i=0;A[i]!='\0';i++){
        continue;
    }
    i--;
    j=0;
    for(;i>=0;i--){
        B[j++]=A[i];
    }
    B[j]='\0';
    cout<<B;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    //Approach 2
    char A[]="Python";
    
    int i,j;
    for(i=0;A[i]!='\0';i++){
        continue;
    }
   
    // cout<<i;
    i--;
    j=0;
    while(j<i){
        swap(A[i],A[j]);
        j++;
        i--;
    }
cout<<A;
    return 0;
}