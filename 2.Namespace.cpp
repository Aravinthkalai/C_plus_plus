// /*Example 1
// Accessing specific things on std libirary using :: operator
// std contains many functions, classes, etc. If our usage is very low,
//  we can access specific things using the :: operator.
//*/
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

// /*Example 2
//  To use the same variable name with different values using namespace example
//*/
// Namespaces : Allow grouping of code (variables, functions, classes) under a name to avoid conflicts.
// :: operator: Used to access members of a namespace (or a class, or struct, etc.).
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
// /*
//     Notice that both name1 and name2 have a variable named name, but since they are in separate 
//     namespaces, there is no conflict. These are treated as different variables because they 
//     belong to different namespaces.
// */
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

/*Example 3
Specifically mentioning the namespace allows direct access instead of using the :: operator.*/
#include<iostream>
using namespace std;
namespace name1{
    string name = "ram";
    int age = 20;
}
namespace name2{
    string name = "ram2";
}

using namespace name1;

/*The using namespace directive allows 
us to directly access all members (variables, functions, etc.) of name1 
without using the name1:: prefix.
In this case, we can access name from name1 directly, without needing to write name1::name
 */
int main()
{
    cout<<name<<endl;
    return 0;
}
/*
Output
ram
*/