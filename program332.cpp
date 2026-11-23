#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {0};
    int icnt = 0;

    cout<<"enter the elements :\n";
    
    for(icnt = 0; icnt < 5; icnt++)
    {
        cin>>Arr[icnt];
    }

    cout<<"elements of the array are :\n";

    for(icnt = 0; icnt < 5; icnt++)
    {
        cout<<Arr[icnt]<<endl;
    }



    return EXIT_SUCCESS;
}