// /*
// Unary Operator overloading

// */
 
// #include<iostream>
// using namespace std; 
 
// class box
// {
// private:
//     int x;
// public:
//     box()
//     {
//         x=0;
//     }
//     box(int a )
//     {
//         x=a;
//     }
//     void print()
//     {
//         cout<<"X :" <<x<<endl;
//     }
// };
 
// //Driver code 
// int main() { 
//     box o;
//     o.print();
//     box o1(20);
//     o1.print();
//     return 0; 
// }
// /*Output
// X :0
// X :20
// */

/*
Unary Operator overloading

*/
 
#include<iostream>
using namespace std; 
 
class box
{
private:
    int x;
public:
    box()
    {
        x=0;
    }
    box(int a )
    {
        x=a;
    }
    void print()
    {
        cout<<"X :" <<x<<endl;
    }
    void operator ++()
    {
        cout<<"Executed pre increment"<<endl;
        x++;
    }
    void operator ++(int) //if parameter is mentii=oned 
    {
        cout<<"Executed post increment"<<endl;
        x++;
    }
};
 

//Driver code 
int main() { 
    box o;
    o.print(); //x=0
    /*
    if object present after the operator then ++() will be executed
    */
    ++o; // pre increment 
    o.print(); //x=1
    /*
    if object present before the operator then ++(int) will be executed
    */
    o++; // post increment
    o.print(); // x=2
    box o1(20);
    o1.print(); //x=20;
    return 0; 
}
/*Output
X :0
X :20
*/