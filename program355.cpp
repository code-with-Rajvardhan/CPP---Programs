#include<iostream>
using namespace std;

class Number
{
    private :
        int *Arr;
        int iLen;

    public :

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

        int Summation()
        {
            int iSum = 0;
            int icnt = 0;

            for(icnt = 0; icnt < iLen; icnt++)
            {
                iSum = iSum + Arr[icnt];
            }
            return iSum;
        }

        float Avg()
        {
            int iSum = 0;
            int icnt = 0;

            for(icnt = 0; icnt < iLen; icnt++)
            {
                iSum = iSum + Arr[icnt];
            }

            return ((float)iSum / (float)iLen);
        }
};

int main()
{
    Number nobj1(5);
    Number nobj2(7);

    nobj1.Accept();
    cout<<"Additions is :"<<nobj1.Summation()<<endl;
    
    nobj2.Accept();
    cout<<"Additions is :"<<nobj2.Summation()<<endl;


    return EXIT_SUCCESS;
}