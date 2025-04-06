// /*Example 2*/
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

/*Example 2*/
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
int main()
{
    char a='K', b='L';
    int x=10, y=20;
    cout<<"Before swap A: "<<a<<" B : "<<b<<endl;
    swaping(a,b);
    cout<<"After swap A: "<<a<<" B : "<<b<<endl;
    cout<<"Before swap X: "<<x<<" Y : "<<y<<endl;
    swaping(x,y);
    cout<<"After swap X: "<<x<<" Y : "<<y<<endl;
}
/*
Output:
Before swap A: K B : L
After swap A: L B : K
Before swap X: 10 Y : 20
After swap X: 20 Y : 10
*/