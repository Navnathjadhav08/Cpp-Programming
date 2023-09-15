#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int A = 10, B = 20;
    int Ret = 0;

    Ret = Addition(A,B);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}


/*
1. Memory for local variables
2. Memory for input arguments
3. Address of next instruction
4. Value of old EBP
*/

