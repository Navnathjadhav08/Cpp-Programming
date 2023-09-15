#include<iostream>
using namespace std;

class Demo
{
    public:
        int A, B;           // Non static characteristics
        static int X, Y;    // Static characteristics

        Demo()              // Default costructor
        {
            // Initialisation of non static characteristics
            A = 0;
            B = 0;
        }

        void fun()  // void fun(Demo *this)
        {
            cout<<"Inside non static function fun"<<"\n";
            cout<<"Value of A : "<<this->A<<"\n";
            cout<<"Value of B : "<<this->B<<"\n";
            cout<<"Value of X : "<<X<<"\n";
            cout<<"Value of Y : "<<Y<<"\n";

        }
        static void gun()   // static void gun()
        {
            cout<<"Inside static function gun"<<"\n";
            cout<<"Value of X : "<<X<<"\n";
            cout<<"Value of Y : "<<Y<<"\n";
        }
};
// Initialisation of static characteristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    Demo::gun();
    Demo obj;

    obj.fun();  // fun(&obj);
    obj.gun();  // Avoid kara

    return 0;
}