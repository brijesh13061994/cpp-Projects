#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "inc/factorial.h"

#define clrscr 
using namespace std;

int main()
{
    system("cls");
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << factorial(0);
    cout<<endl;
}