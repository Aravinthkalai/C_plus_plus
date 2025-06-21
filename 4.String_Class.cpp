// /*Example 1
//String constructor 
//*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str = "Hello world";
//     cout<<"string is :  "<<str<<endl;
//     /* passing content to string constructor
//     string --> class 
//      b --> object 
//      ()--> constructor
//*/
//     string b("welcome to c++"); 
//     cout<<"string is :  "<<b;
//     return 0;
// }
// /*
// Output:
// string is :  Hello world
// string is :  welcome to c++
// */

// /*Example 2 : String concordination*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1 = "Hello world";
//     string str2 = "welcome";
//     /*Simply using + symbol will concordinates two strings*/
//     cout<<"string is :  "<<str1+ " "+str2<<endl;
//     /* Or append() will concordinate two strings*/
//     str1 = str1.append(str2);
//     cout<<"string is :  "<<str1<<endl;
//     return 0;
// }
// /*
// Output:
// string is :  Hello world welcome
// string is :  Hello worldwelcome
// */

// /*Example 3 : Accessing character in a string */
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1 = "Hello world";
//     string str2 = "welcome";
//     cout<<"string is :  "<<str1+ " "+str2<<endl;
//     str1 = str1.append(str2);
//     cout<<"string is :  "<<str1<<endl;
//     cout<<"1st char is :  "<<str1[0]<<endl;
//     str1[0] = 't';
//     cout<<"string is :  "<<str1[0]<<endl;
//     return 0;
// }
// /*
// Output:
// string is :  Hello world welcome
// string is :  Hello worldwelcome
// */

// /*Example 4 : string push and pop*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1;
//     cout<<"Enter the string"<<endl;
//     cin>>str1;
//     str1.push_back('s'); 
//     cout<<"String : "<<str1<<endl;
//     str1.pop_back();
//     cout<<"String : "<<str1<<endl;
//     return 0;
// }
// /*
// Output:
// Enter the string
// lamps 
// String : lampss
// String : lamps
// */

// /*Example 4 : string length and size*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1("Hello world");
//     cout<<"Size of string "<<str1.size()<<endl;
//     cout<<"length of string "<<str1.length()<<endl;
///*
// .max_size(): Returns the maximum number of characters the
// string can hold, which depends on the system and implementation of the C++ Standard Library.
//*/
//     cout<<"Max size "<<str1.max_size()<<endl;

// }
// /*
// Output:
// Size of string 11
// length of string 11
// Max size 4611686018427387903
// */


// /*Example 5 : string iterator to access characters in a string*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1("Hello W");
//     /*Iterator used to pop out each character in a string*/
//     string::iterator it;
//     /*
//     str1.begin() --> sends initial address of str1
//     str1.end() --> sends end address of str1
//     */
//     for(it=str1.begin();it!=str1.end();it++)
//     {
//         cout<<*it<<endl;
//     }
//     cout<<"---------------------------------"<<endl;
//     string::reverse_iterator it2;
//     for(it2=str1.rbegin();it2!=str1.rend();it2++)
//     {
//         cout<<*it2<<endl;
//     }

// }
// /*
// Output:
// H
// e
// l
// l
// o

// W
// ---------------------------------
// W

// o
// l
// l
// e
// H
// */

// /*Example 4 : string swap*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1 ="hello";
//     string str2 ="world";
//     str1.swap(str2);
//     cout<<str1<<str2;

// }
// /*
// Output:
// worldhello
// */
/*Example 5: Combined all the functions together 
*/
#include<iostream>
using namespace std; 
int main()
{
    string str1 = "abc";
    string str2 = "de";
    string::iterator it;
    string::reverse_iterator it2;
    cout<<"Str 1 : "<<str1<<endl;
    cout<<"Str 2 : "<<str2<<endl;
    cout<<"string concord with space is :  "<<str1+ " "+str2<<endl;
    str1 = str1.append(str2);
    cout<<"Append of st1 and st2 :  "<<str1<<endl;
    cout<<"before changing first char of str1  :  "<<str1[0]<<endl;
    str1[0] = 't';
    cout<<"After changing first char of str1  : "<<str1[0]<<endl;
    str1.push_back('s'); 
    cout<<"After push back string is :" <<str1<<endl;
    str1.pop_back(); 
    cout<<"After pop  back string is :" <<str1<<endl;
    cout<<"Size of string "<<str1.size()<<endl;
    cout<<"length of string "<<str1.length()<<endl;
    cout<<"Max size "<<str1.max_size()<<endl;
    cout<<"String iterators prints str1 contents"<<endl;
    for(it=str1.begin();it!=str1.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    cout<<"String reverse iterators prints str1 contents in rev"<<endl;
    for(it2=str1.rbegin();it2!=str1.rend();it2++)
    {
        cout<<*it2;
    }
    cout<<endl;
    cout<<"Before swapping str1 : "<<str1<<" and str2 : "<<str2<<endl;
    str1.swap(str2);
    cout<<"After swapping str1 :"<<str1 <<" and str2: "<<str2<<endl;
    return 0;
}
/*Output*/
/*
Str 1 : abc
Str 2 : de
string concord with space is :  abc de
Append of st1 and st2 :  abcde
before changing first char of str1  :  a
After changing first char of str1  : t
After push back string is :tbcdes
After pop  back string is :tbcde
Size of string 5
length of string 5
Max size 4611686018427387903
String iterators prints str1 contents
tbcde
String reverse iterators prints str1 contents in rev
edcbt
Before swapping str1 : tbcde and str2 : de
After swapping str1 :de and str2: tbcde
*/