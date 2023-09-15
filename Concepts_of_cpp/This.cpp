#include<iostream>
using namespace std;

class Demo
{
        public:
        int No1;
        int No2;

        Demo(int i, int j)
        {
            No1 = i;
            No2 = j;
        }

        void Fun(int A, int B)  // void Fun(Demo *this, int A, int B)
        {
            cout<<"Inside Fun : "<<this->No1<<"\n";
            cout<<"Inside Fun : "<<this->No2<<"\n";
        }

        void Gun(int A)         // void Gun(Demo *this, int A)
        {
            cout<<"Inside Gun : "<<this->No1<<"\n";
            cout<<"Inside Gun : "<<this->No2<<"\n";        
        }
};
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    
    obj1.Fun(10,20);        // Fun(&obj1,10,20);        Fun(100,10,20)
    obj2.Gun(10);           // Gun(&obj2,10);           Gun(200,10)

    return 0;
}

// Every C++ programs gets internally converted into C program.