#include<iostream>
using namespace std;
#pragma pack(1)
class Base
{
    public:
      int i ,j;

    void fun()
    {
        cout<<"inside base fun \n";
    }

     void gun()
    {
        cout<<"inside base gun \n";
    }

    virtual void sun()
    {
        cout<<"inside base sun \n";
    }

    virtual void run()
    {
        cout<<"inside base run \n";
    }
};                // 16 bytes

#pragma pack(1)
class Derieved : public Base
{
    public:
        int x;

     void fun()
    {
        cout<<"inside derived fun \n";
    }

    void sun()
    {
        cout<<"inside derived sun \n";
    }

   virtual void mun()
    {
        cout<<"inside derived mun \n";
    }
   void bun()
    {
        cout<<"inside derived bun \n";
    }
};               // 20 bytes

int main()
{
    Base *bp = new Derieved();

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derieved)<<"\n";
    
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
  //  bp->mun();   // error
  //  bp->bun();   // error


    return 0;
}