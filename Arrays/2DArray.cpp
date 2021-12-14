#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    
    //method one
    int A[3][4]{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //method two
    int *B[3]  //3=rows;
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    B[3]=new int[4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //method three
    int **C;
    C=new int[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
