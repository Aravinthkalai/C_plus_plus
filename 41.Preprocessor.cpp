/*Preprocessor derivative
*/
#include<iostream>
#define PI 3.14
#define rectangle(length, breadth) (length * breadth)
#define createString(s) #s //#s will convert anything to string type
/*Token pasting operator ## which binds two strings and checks for 
the available tokens like var, funtion if it is available 
it will point to the tokken so we will get 123 see example*/
#define ConCadString(a, b) a##b 

using namespace std;

int main()
{
    cout<<"Area of circle:"<<PI*5*5<<endl;
    int length = 20, breadth = 5, area;
    int number = 123;
    area=rectangle(length,breadth);
    cout<<"Area of rectangle:"<<area<<endl;
    cout<<"New String : "<<createString(12345 Aravinth K)<<endl;
    cout<<"ConCad String : "<<ConCadString(num,ber)<<endl;
    cout<<"__LINE__ :"<<__LINE__<<endl;
    cout<<"__FILE__ :"<<__FILE__<<endl;
    cout<<"__DATE__ :"<<__DATE__<<endl;
    cout<<"__TIME__ :"<<__TIME__<<endl;
    /*Returns compiler version*/
    cout<<"__cplusplus :"<<__cplusplus<<endl;
    return 0;
}
/*Output
Area of circle:78.5
Area of rectangle:100
New String : 12345 Aravinth K
ConCad String : 123
__LINE__ :20
__FILE__ :.\Preprocessor.cpp
__DATE__ :Apr  6 2025
__TIME__ :20:25:34
__cplusplus :201402
*/
/*
| C++ Standard  | `__cplusplus` value                       |
| ------------- | ----------------------------------------- |
| C++98 / C++03 | `199711L`                                 |
| C++11         | `201103L`                                 |
| C++14         | `201402L`                                 |
| C++17         | `201703L`                                 |
| C++20         | `202002L`                                 |
| C++23         | `202302L` (or higher, compiler-dependent) |
*/