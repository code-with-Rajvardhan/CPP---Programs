#include<iostream>
using namespace std;

int main()
{
   int *ptr = NULL;
   int iSize = 0, icnt = 0;

   cout<<"enter no of elements :\n";
   cin>>iSize;

   ptr = new int[iSize];  // step 1 : alloacate the memory

   // step 2 : use the memory 

    cout<<"enter the elements :\n";
    
    for(icnt = 0; icnt < iSize; icnt++)
    {
        cin>>ptr[icnt];
    }

    cout<<"elements of the array are :\n";

    for(icnt = 0; icnt < iSize; icnt++)
    {
        cout<<ptr[icnt]<<endl;
    }


   // step 3: free the memory

   delete [] ptr;

   



    return EXIT_SUCCESS;
}