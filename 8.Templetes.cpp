// /*Example 1 : Templates
// #include<iostream>
// using namespace std; 
// void swap(int &a, int &b)
// { 
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a=10, b=20;
//     cout<<"Before swap A: "<<a<<" B : "<<b<<endl;
//     swap(a,b);
//     cout<<"After swap A: "<<a<<" B : "<<b<<endl;
// }
// /*
// Output:
// Before swap A: 10 B : 20
// After swap A: 20 B : 10
// */

// /*Example 2*/
// #include<iostream>
// using namespace std; 
// void swap(char &a, char &b)
// { 
//     char temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     char a='K', b='L';
//     cout<<"Before swap A: "<<a<<" B : "<<b<<endl;
//     swap(a,b);
//     cout<<"After swap A: "<<a<<" B : "<<b<<endl;
// }
// /*
// Output:
// Before swap A: K B : L
// After swap A: L B : K
// */

/*Example 3*/
// /*
// Templates in C++ allow us to write generic and reusable code. 
// They enable functions and classes to operate with different data types 
// without rewriting code for each type.
// syntax : template <typename A, typename B, ...>

// */
#include<iostream>
using namespace std; 
template <class T>
void swaping(T &a, T &b)
{ 
    T temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int &a, int &b)
{ 
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b)
{ 
    char temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    char a='K', b='L';
    int x=10, y=20;
    cout<<"Before swap A: "<<a<<" B : "<<b<<endl;
    swap(a,b);
    cout<<"After swap A: "<<a<<" B : "<<b<<endl;
    cout<<"Before swap X: "<<x<<" Y : "<<y<<endl;
    swap(x,y);
    cout<<"After swap X: "<<x<<" Y : "<<y<<endl;
    /*If we use templte then no need to worry about data type
    it will automatically do it for us*/
    cout<<"Using Templete Before swap A: "<<a<<" B : "<<b<<endl;
    swaping(a,b);
    cout<<"Using Templete After swap A: "<<a<<" B : "<<b<<endl;
    cout<<"Using Templete Before swap X: "<<x<<" Y : "<<y<<endl;
    swaping(x,y);
    cout<<"Using Templete After swap X: "<<x<<" Y : "<<y<<endl;
}
/*
Output:
Before swap A: K B : L
After swap A: L B : K
Before swap X: 10 Y : 20
After swap X: 20 Y : 10
Using Templete Before swap A: L B : K
Using Templete After swap A: K B : L
Using Templete Before swap X: 20 Y : 10
Using Templete After swap X: 10 Y : 20
*/