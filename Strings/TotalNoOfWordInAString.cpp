#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Total no of word in a string
char name[]="how are you aniket";
int word=0;
for(int i=0;name[i]!='\0';i++){
   if(name[i]==' '&&name[i-1]!=' ')
    word++;
}
cout<<"Total no of words are "<<word+1;
}