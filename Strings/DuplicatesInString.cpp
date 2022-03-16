#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    //Approach 1 - Searching letters
    int flag=0;
   char A[]="sagar";
   int i,j;
   for(i=0;A[i]!='\0';i++){
       for(j=i+1;A[j]!='\0';j++){
           if(A[i]==A[j]){
               cout<<" Repeated Element is "<<A[i]<<endl;
           }
           
       }
   }
   
    return 0;
}
int main()
{
    
    //Approach 2  - Hash Table
   char A[]="tattar";
   int B[26]={0};
   for(int i=0;A[i]!='\0';i++){
       int difference=A[i]-97;
       B[difference]++;
   }
   for(int i=0;i<26;i++){
       if(B[i]>1){
           char c=i+97;
           cout<<c<<" ";
       }
   }
   
   
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{  

    //Approach 3 - using bitwise Operations.
    char A[]="finding";
     int H=0,x=0;
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<A[i]-97;
    
    if(H&x){
        cout<<" Duplicated element is "<<A[i]<<endl;   
    }
    else{
        H=x|H;
    }
}
    return 0;
}