#include<iostream>
using namespace std;

class Number
{
    public :
        int *Arr;
        int iLen;

        Number(int iSize)
        {
            cout<<"inside the Number \n";
            this->iLen = iSize;
            this->Arr = new int [iLen];
        }
        ~Number()
        {
            cout<<"inside the distructor \n";
            delete[] this->Arr;
        }
};

int main()
{
    Number number1(5);
    Number number2(7);

    return EXIT_SUCCESS;
}