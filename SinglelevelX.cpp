#include<iostream>
using namespace std;
class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"inside base constructor\n";
        }

        ~Base()
        {
            cout<<"inside base destructor\n";
        }

        void fun()
        {
            cout<<"inside base fun\n";
        }

        void gun()
        {
            cout<<"inside base gun\n";
        }

};

class Derieved : public Base
{
    public:
        int x,y;

        Derieved()
        {
            cout<<"inside derieved constructor\n";
        }

        ~Derieved()
        {
            cout<<"inside derieved destructor\n";
        }

        void sun()
        {
            cout<<"inside derieved sun\n";
        }
};

int main()
{
    
    Derieved dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}