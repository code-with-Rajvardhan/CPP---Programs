#include<iostream>
using namespace std;

class arithemetic
{
    public:
        int no1;
        int no2;

        arithemetic()
        {
           this->no1 = 0;
            this->no2 = 0;
        }

        arithemetic(int i, int j)
        {
           this->no1 = i;
            this->no2 = j;
        }

        //int addition(arithmetic *this)
        int addition()
        {
            int ans = 0;
            ans = this->no1 + this->no2;
            return ans;
        }
};
int main()
{
    arithemetic aobj1(10,11);
    int result = 0;

    // result = addition(&aobj1);
    result = aobj1.addition();

    cout<<"addition is : "<<result<<"\n";

    
    
    return 0;
}