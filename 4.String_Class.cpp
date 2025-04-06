// /*Example 2*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str = "Hello world";
//     cout<<"string is :  "<<str<<endl;
//     /* passing content to string constructor
//     string --> class b --> object ()--> constructor*/
//     string b("welcome to c++"); 
//     cout<<"string is :  "<<b;
//     return 0;
// }
// /*
// Output:
// string is :  Hello world
// string is :  welcome to c++
// */

// /*Example 2 : string concordination*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1 = "Hello world";
//     string str2 = "welcome";
//     cout<<"string is :  "<<str1+ " "+str2<<endl;
//     str1 = str1.append(str2);
//     cout<<"string is :  "<<str1<<endl;
//     return 0;
// }
// /*
// Output:
// string is :  Hello world welcome
// string is :  Hello worldwelcome
// */

// /*Example 3 : string concordination*/
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

// /*Example 4 : string flush*/
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

// /*Example 4 : string flush*/
// #include<iostream>
// using namespace std; 
// int main()
// {
//     string str1("Hello world");
//     cout<<"Size of string "<<str1.size()<<endl;
//     cout<<"length of string "<<str1.length()<<endl;
//     cout<<"Max size "<<str1.max_size()<<endl;
//     cout<<"Size"<<endl;

// }
// /*
// Output:
// Size of string 11
// length of string 11
// Max size 4611686018427387903
// Size
// */


// /*Example 4 : string flush*/
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

/*Example 4 : string flush*/
#include<iostream>
using namespace std; 
int main()
{
    string str1 ="hello";
    string str2 ="world";
    str1.swap(str2);
    cout<<str1<<str2;

}
/*
Output:
worldhello
*/