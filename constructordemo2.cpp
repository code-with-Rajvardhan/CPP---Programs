#include<iostream>
using namespace std;

class PPA
{
    public:

        int no1;
        int no2;

       PPA()   // default constructor 
        {
            cout<<"inside default constructor\n";
        }
       PPA(int a , int b)   // parameterised constructor 
        {
            cout<<"inside parameterised constructor\n";
        }

       ~PPA()
       {
        cout<<"inside disructor\n";
       } 
    
};

int main()
{
    PPA pobj1;
    PPA pobj2(11 , 21);

    

    return 0;
}