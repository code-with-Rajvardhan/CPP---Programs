#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
    public:
        T No1;
        T No2;

        Arithmetic(T A, T B);
        T Addition();
        T Substraction();
      
};

template <class T>
Arithmetic :: Arithmetic(T A, T B)  // error
{
    No1 = A;
    No2 = B;
}

template <class T>
T Arithmetic :: Addition()    // error
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template <class T>
T Arithmetic :: Substraction()   // error
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithmetic <int> *aobj = new Arithmetic <int> (11,10);  

    cout<<aobj->Addition()<<endl;

    return EXIT_SUCCESS;
}