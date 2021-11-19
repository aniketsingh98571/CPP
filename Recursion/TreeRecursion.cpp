#include <stdio.h>
#include <iostream>
using namespace std;
void TreeRecursion(int number)
{
    if (number > 0)
    {
        cout << number << " ";
        TreeRecursion(number - 1);
        TreeRecursion(number - 1);
    }
}

int main()
{

    TreeRecursion(3);
    return 0;
}