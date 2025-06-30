/*Virtual function */
    /*
        if function prototype is assigned with 0 then it is called
    pure virtual function meaning that user must define this function
    in any of the derived class this prevents programmers to forgot
    the function definition
        if class contains alleast one virtual function then it is called
        abstrct class
    */
#include<iostream>
using namespace std; 
 
class base 
{
    public:
        virtual void show() = 0;
};
class derived1:public base // derived1 class
{
    public:
        void show()
        {
            cout<<"Show from deriverd1"<<endl;
        }

};
class derived2:public base // derived2 class
{
    public:
        void show()
        {
            cout<<"Show from deriverd2"<<endl;
        }

};

int main() 
{ 

    base *b = NULL;
    derived1 d1;
    derived2 d2;
    b = &d1;
    b->show();
    b = &d2;
    b->show();

    return 0; 
}
/*Output
Show from deriverd1
Show from deriverd2
*/