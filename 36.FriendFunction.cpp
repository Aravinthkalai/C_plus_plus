/*
Friend function
A friend function in C++ is a non-member function in a class
that is granted access to private and protected members of a class.

Since it can access all private, protected, public members (includes methods), this 
feature can be used in Logging/debugging tools that need internal access
*/

#include<iostream>
using namespace std;

class A
{
    protected:
        int z;
    private:
        int x,y;
    public:
        int a;
        friend void setData();
};
void setData()
{
    A a;
    a.x = 20;
    a.y = 30;
    a.a = 60;
    a.z = 50;
    cout<<"X : "<<a.x<<endl;
    cout<<"Y : "<<a.y<<endl;
    cout<<"A : "<<a.a<<endl;
    cout<<"Z : "<<a.z<<endl;

}
int main()
{
    setData();

    return 0;
}
/*Output
X : 20
Y : 30
A : 60
Z : 50
*/