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

        void Accept()
        {
            int icnt = 0;
            cout<<"enter the elements :\n";

            for(icnt = 0; icnt < iLen; icnt++)
            {
                cin>>Arr[icnt];
            }
        }

        void Display()
        {
            int icnt = 0;
            cout<<"elements of the array are : \n";

            for(icnt = 0; icnt < iLen; icnt++)
            {
                cout<<Arr[icnt]<<endl;
            }
        }
};

int main()
{
    int iSize = 0;

    cout<<"enter no of elements :\n";
    cin>>iSize;

// step 1 : allocate the memory

    Number *number1 = new Number(iSize);
    

// step 2 : use the memory 

    number1->Accept();
    number1->Display();

// step 3 : deallocactes the memory

delete number1;


    return EXIT_SUCCESS;
}