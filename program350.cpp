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
// step 1 : allocate the memory

    Number *number1 = new Number(5);
    Number *number2 = new Number(7);

// step 2 : use the memory 


// step 3 : deallocactes the memory

delete number1;
delete number2;

    return EXIT_SUCCESS;
}