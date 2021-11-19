#include<iostream>
using namespace std;
void TailRecursion(int number){
    if(number>0){
        cout<<number;
        TailRecursion(number-1);
    }
}
int main(){
    TailRecursion(3)
}