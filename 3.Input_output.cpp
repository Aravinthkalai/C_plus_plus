// /*Example 1*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int a;
//     cout<<"Hello world ";
//     cin>>a;
//     cout<<"Your number"<<a;
//     return 0;
// }

// /*Example 2*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int a;
//     cout<<"Hello world "<<endl; // endl will create new line
//     cin>>a;
//     cout<<"Your number"<<a;
//     return 0;
// }

// /*Example 2*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int a,b;
//     cout<<"Enter integer value"<<endl; // endl will create new line
//     cin>>a>>b;
//     cout<<"Total "<<a+b;
//     return 0;
// }

// /*Example 2*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int a,b;
//     cout<<"Enter integer value"<<endl; // endl will create new line
//     cin>>a>>b;
//     cout<<"Total "<<a+b;
//     return 0;
// }

// /*Example 2*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str;
//     cout<<"Enter string"<<endl; // endl will create new line
//     cin>>str; // if user eneter string with space it will consider until the space
//     cout<<"string is :  "<<str;
//     return 0;
// }
// /*
// Output:
// Enter string
// Hello world
// string is :  Hello
// */

/*Example 2*/
#include<iostream>
using namespace std; 
int main()
{
    string str;
    cout<<"Enter string"<<endl; // endl will create new line
    getline(cin,str); // if user eneter string with space it will consider until the space
    cout<<"string is :  "<<str;
    return 0;
}
/*
Output:
Enter string
Hello world
string is :  Hello world
*/
