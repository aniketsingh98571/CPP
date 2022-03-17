#include <bits/stdc++.h>

using namespace std;


int main()
{
   string s;
   cin>>s;
   int count[26]={0};
   int i;
   for(i=0;i<s.length();i++){
       if(s[i]>='a'&&s[i]<='z'){
           int temp=s[i]-'a';
           count[temp]++;
       }
       else if(s[i]>='A'&&s[i]<='Z'){
           int temp=s[i]-'A';
           count[temp]++;
       }
   }
   int max;
   int index;
   max=count[0];
   for(i=0;i<26;i++){
       if(count[i]>max){
           max=count[i];
           index=i;
       }
   }
   char c=index+'a';
   cout<<c;
    
    return 0;
}s