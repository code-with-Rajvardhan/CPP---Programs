#include<iostream>
using namespace std;
int main()
{
    int std = 0;

    cout<<"Enter your standerd : \n";
    cin>> std;

    if (std == 1)
    {
        cout<<"exam time is 9.30am \n";
    }
    else if (std == 2)
    {
        cout<<"exam time is 10.30am \n";
    }
    else if (std == 3)
    {
        cout<<"exam time is 11.30am \n";
    }
    else
    {
        cout<<"its invalid statement";
    }
    


    return 0;
}