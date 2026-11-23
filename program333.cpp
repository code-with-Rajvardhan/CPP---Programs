#include<iostream>
using namespace std;

int main()
{
   int *ptr = NULL;
   int iSize = 0;

   cout<<"enter no of elements :\n";
   cin>>iSize;

   ptr = new int[iSize];  // step 1 : alloacate the memory

   // step 2 : use the memory 



   // step 3: free the memory

   delete ptr;

   



    return EXIT_SUCCESS;
}