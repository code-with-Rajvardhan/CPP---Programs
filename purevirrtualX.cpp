#include<iostream>
using namespace std;
#pragma pack(1)
class Base
{
    public:
        int i , j;

        int addition (int no1 , int no2)
        {
            return no1 + no2;
        }

        virtual int subtraction(int no1 , int no2) = 0;
};
#pragma pack(1)
class Derived : public Base
{
    public:
        int x;

        int subtraction(int no1 , int no2)
        {
            return no1 - no2;
        }

        int multiplication(int no1 , int no2)
        {
            return no1 * no2;
        }
};

int main()
{
   Derived dobj;
   int Ret = 0;

   cout<<"sizeof base is:"<<sizeof(Base)<<"\n";
   cout<<"sizeof Derived is:"<<sizeof(Derived)<<"\n";

   Ret = dobj.addition(11,10);
   cout<<"addition is :"<<Ret<<"\n";

   Ret = dobj.subtraction(11,10);
   cout<<"substraction is :"<<Ret<<"\n";

   Ret = dobj.multiplication(11,10);
   cout<<"multiplication is :"<<Ret<<"\n";

   

    return 0;
}