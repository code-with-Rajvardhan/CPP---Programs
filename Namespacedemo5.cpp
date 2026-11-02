#include<iostream>
using namespace std;

namespace Marvellous
{
    int i = 11;

    void Display()
    {
        cout<<"inside display of Marvellous\n";
    }
}

namespace PPA
{
    int i = 21;

    void Display()
    {
        cout<<"inside display of PPA\n";
    }
}

int main()
{
    Marvellous::Display();
    PPA::Display();
  

    return 0;
}