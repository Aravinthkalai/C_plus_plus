// /*Example 1*/
// #include<iostream>
// using std::cout;
// using std::cin; 
// using std::endl;
// int main()
// {
//     int a;
//     cout<<"Hello world "<<endl;
//     cin>>a;
//     cout<<"Your number"<<a;
//     return 0;
// }

// /*Example 2*/
// /*If we don't want to chnange the string name
// we can proceed with two name spaces mentioned below and
// we can access each of strings using :: operator*/
// #include<iostream>
// using namespace std;
// namespace name1{
//     string name = "ram";
//     int age = 20;
// }
// namespace name2{
//     string name = "ram";
// }
// int main()
// {
//     cout<<name1::name<<endl;
//     cout<<name2::name<<endl;
//     cout<<name1::age<<endl;
//     return 0;
// }
// /*
// Output
// ram
// ram
// 20
// */

/*Example 3*/
#include<iostream>
using namespace std;
namespace name1{
    string name = "ram";
    int age = 20;
}
namespace name2{
    string name = "ram2";
}
/*if we decalred like below then we can directly
access the name variable without scope resolution operator */
using namespace name1;
int main()
{
    cout<<name<<endl;
    return 0;
}
/*
Output
ram
*/