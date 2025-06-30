/*
Friend class 
A friend class in C++ allows one class to access the private and protected members of another class 
*/
// #include<iostream>
// using namespace std;
// /* class B is a forward declaration to avoid errors while using class B in class A
// */
// class B; // forward declaration
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
class B; // forward declaration

class A {
private:
    int a_private = 1;
public:
    friend class B;  // B can access A's private members
};

class B {
private:
    int b_private = 2;
public:
    void accessA(A& a) {
        cout << a.a_private << "\n";  // Allowed: B is friend of A
    }

    void accessB(B& b) {
        cout << b.b_private << "\n";  // Allowed: B can access own private members
    }
};

int main() {
    A a;
    B b;
    b.accessA(a);  // OK
    // a.accessB(b); // ERROR! A cannot access private members of B unless B declares friend A
}

/*Output
1
*/
/* Example 2: Accessing private variable using friend class*/
#include <iostream>
using namespace std;

class B;  // forward declaration

class A {
private:
    int a_private = 1;
public:
    friend class B;  // B is friend of A
    void accessB(B& b); // declare only
};

class B {
private:
    int b_private = 2;
public:
    void accessA(A& a) {
        cout << a.a_private << "\n";  // B can access A's private members (friend)
    }
    friend class A;  // A is friend of B
};

// Define accessB after B is fully defined
void A::accessB(B& b) {
    cout << b.b_private << "\n";  // Now allowed: A is friend of B
}

int main() {
    A a;
    B b;
    b.accessA(a);  // OK
    a.accessB(b);  // OK
}
/*Output
1
2
*/