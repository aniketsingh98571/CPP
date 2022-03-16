#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   /*
   Anagram means both the strings should have same letters, even in jumbled manners.
   Eg 1
   String 1="decimal"
   String 2="medical"
   */
   char A[]="decimal";
   char B[]="medical";
   int i,j;
   int C[26]={0};
   
   int flag=0;
   for( i=0;A[i]!='\0';i++){
       int difference=A[i]-97;
       C[difference]++;
   }
   for(j=0;B[j]!='\0';j++){
       int difference=B[j]-97;
       C[difference]--;
   }
   for(int i=0;i<26;i++){
     if(C[i]!=0){
         flag=1;
         break;
     }
        
   }
   if(flag==1){
       cout<<"It is not Anagram ";
   }
   else
    cout<<"It is anagram";
   return 0;
}
    
