/*Example 1*/
/* Destrctor it is an instance member function which is called 
automatically whenever the object is going to destory 
this is final function call executed at end of the program 
to cleanup the memory
destructor also have the same name as class name but ~ symbol 
need to add before the descructor function so we know it is a
destructor function.
*/
#include<iostream>
using namespace std; 
class math
{
    private:
        int a,b,c;
    public:
        math()
        {
            a= 10;
            b =10;
            cout<<"Constructor called"<<endl;
        }
        ~math()
        {
            cout<<"Memory cleaned destructor called"<<endl;
        }
        void add()
        {
            c=a+b;
            cout<<"Total : "<<c<<endl;
        }
};
int main()
{
    math o;
    o.add();
}

/*
Output:
Constructor called
Total : 20
Memory cleaned destructor called
*/
