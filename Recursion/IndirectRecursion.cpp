#include <stdio.h>
#include<iostream>
using namespace std;
void IndirectRecursionB (int number);
void IndirectRecursionA (int number)
{
  if (number > 0)
    {
      cout << number << " ";
      funB (number - 1);

    }
}

void IndirectRecursionB (int number)
{
  if (number > 1)
    {
      cout << number << " ";
      funA (number / 2);
    }
}

int main ()
{

  IndirectRecursionA (20);
  return 0;
}
