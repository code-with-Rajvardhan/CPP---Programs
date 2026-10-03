#include<iostream>
using namespace std;

class arithemetic
{
    public:
        int no1;
        int no2;

        arithemetic()
        {
            no1 = 0;
            no2 = 0;
        }

        arithemetic(int i, int j)
        {
            no1 = i;
            no2 = j;
        }
};
int main()
{
    arithemetic aobj1;
    arithemetic aobj2(10,11);

    cout<<aobj1.no1<<"\n";
    cout<<aobj1.no2<<"\n";

    cout<<aobj2.no1<<"\n";
    cout<<aobj2.no2<<"\n";
    
    return 0;
}