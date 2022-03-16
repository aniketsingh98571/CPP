#include <bits/stdc++.h>

using namespace std;
void perm(char S[],int k){
    static int A[10]={0};
    static char Result[10];
    int i;
    if(S[k]=='\0'){
        Result[k]='\0';
        cout<<Result<<endl;
    }
    else{
        for(i=0;S[i]!='\0';i++){
            if(A[i]==0){
                Result[k]=S[i];
                A[i]=1;
                perm(S,k+1);
                A[i]=0;
            }
        }
    }
}

int main()
{
    perm("ABC",0);

    return 0;
}