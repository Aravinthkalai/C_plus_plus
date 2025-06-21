/*Example 1
Hello world with using namespace std explanation 
*/
// #include<iostream>

// /* using namaspace std is a directive that tells the compiler 
//    to use the standard namespace (std)
// */
// using namespace std; 

// int main()
// {
//     cout<<"Hello world ";
//     return 0;
// }

/*Example 2
Without using namespace std example 
*/
#include<iostream>

int main()
{
    /* if we don't want to use "using namespace std" then we can use
    scope resolution operator to access these cout, cin , etc..,
    */
    std::cout<<"Hello world ";
    return 0;
}
