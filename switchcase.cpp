#include<iostream>
using namespace std;
int main()
{
    int std = 0;

    cout<<"Enter your standerd : \n";
    cin>> std;

    switch (std)
    {
    case 1:
        cout<<"exam time is 9 am \n";
        break;
     case 2:
        cout<<"exam time is 10 am \n";
        break;
     case 3:
        cout<<"exam time is 11 am \n";
        break;
    default:
        cout<<"its invalid statement";
        break;
    }

    return 0;
}