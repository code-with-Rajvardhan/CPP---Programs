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

        int addition()
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }
};
int main()
{
    arithemetic aobj1(10,11);
    int result = 0;

    result = aobj1.addition();

    cout<<"addition is : "<<result<<"\n";

    
    
    return 0;
}