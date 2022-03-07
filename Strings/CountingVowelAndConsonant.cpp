#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Counting Vowel and Consonant
char name[]="how are you";
cin>>name;
int vcnt=0,ccnt=0;
for(int i=0;name[i]!='\0';i++){
   if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
       vcnt++;
   }
   else{
       if((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<=122))
        ccnt++;
   }
}
cout<<"Vowel Count is "<<vcnt<<endl;
cout<<"Consonant Count is "<<ccnt<<endl;
}