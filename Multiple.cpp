#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i,j;

        BaseA()
        {
            cout<<"insdie baseA construct\n";
        }

        ~BaseA()
        {
            cout<<"insdie baseA destruct\n";
        }

        void fun()
        {
            cout<<"inside baseA fun\n";
        }
};
class BaseB
{
    public:
        int x,y;

        BaseB()
        {
            cout<<"insdie baseB construct\n";
        }

        ~BaseB()
        {
            cout<<"insdie baseB destruct\n";
        }

        void gun()
        {
            cout<<"inside baseB gun\n";
        }
};

class Derieved : public BaseA,BaseB
{
    public:
        int a;

        Derieved()
        {
            cout<<"inside the derived construct\n";
        }

        ~Derieved()
        {
            cout<<"inside the derived destruct\n";
        }

        void sun()
        {
            cout<<"inside derived sun\n";
        }
    
};
int main()
{
    cout<<sizeof(BaseA)<<"\n";
    cout<<sizeof(BaseB)<<"\n";
    cout<<sizeof(Derieved)<<"\n";


    return 0;
}