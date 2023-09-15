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
        };
};
// Initialisation of static characteristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    cout<<"Value of X : "<<Demo::X<<"\n";
    cout<<"Value of Y : "<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A from obj1 : "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 : "<<obj2.A<<"\n";

    obj1.A++;

    cout<<"Value of A from obj1 : "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 : "<<obj2.A<<"\n";

    cout<<"Value of X from obj1 : "<<obj1.X<<"\n";
    cout<<"Value of X from obj2 : "<<obj2.X<<"\n";

    cout<<"Size of demo class object is : "<<sizeof(obj1)<<"\n"; // 8
    return 0;
}