/*
Friend class 
uaing thia concept it is possible to access 
the private members of friend class  
*/
// #include<iostream>
// using namespace std;
// /* class B is declared here so that
// because c++ will execute from top to down approach
// since class b is declared after class A it will through error
// to avoid this it is decalred here 
// */
// class B;
// class A
// {
//     private:
//         int x = 10;
//         friend B;
// };
// class B
// {
//     public:
//         A o;
//         void display()
//         {
//             cout<<"X : "<<o.x<<endl;
//         }
// };

// int main()
// {
//     B o;
//     o.display();
//     return 0;
// }
// /*Output
// X : 10
// */

/* Example 2: Accessing private variable using friend class*/
#include<iostream>
using namespace std;

class B;
class A
{
    private:
        int x;
    public:
        A()
        {
            x=0;
        }
        void print()
        {
            cout<<"X : "<<x<<endl;
        }
        friend void setvalue(A &o, int a );
};

void setvalue(A &o, int a )
{   
    o.x = a;
}
int main()
{
    A o;
    o.print();
    setvalue(o,25);
    o.print();
    return 0;
}
/*Output
X : 0
X : 25
*/