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

       ~PPA()
       {
        cout<<"inside disructor\n";
       } 
    
};

int main()
{
    PPA pobj1;
    PPA pobj2;

    

    return 0;
}