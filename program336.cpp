#include<iostream>
using namespace std;

int Summation(int Arr[],int iLen)
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 0; icnt < iLen; icnt++)
    {
        iSum = iSum + Arr[icnt];
        
    }
    return iSum;
    
}

float Avg(int Arr[],int iLen)
{
    int icnt = 0;
    int iSum = 0;
    

    for(icnt = 0; icnt < iLen; icnt++)
    {
        iSum = iSum + Arr[icnt];
        
    }

    return ((float)iSum / (float)iLen);
    
}

int main()
{
   int *ptr = NULL;
   int iSize = 0, icnt = 0;
   int iRet = 0;
   float fRet  = 0.0f;

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

    iRet = Summation(ptr,iSize);
    cout<<"sumation is :"<<iRet<<endl;
    
    fRet = Avg(ptr,iSize);
    cout<<"avg is :"<<fRet<<endl;


   // step 3: free the memory

   delete [] ptr;

   

    return EXIT_SUCCESS;
}