/*Example 1: Function overloading
Function overloading means we can use the same function name for multiple operations,
and the compiler will differentiate function calls by using their parameters
*/
#include<iostream>
using namespace std; 
int sum(int a, int b, int c)
{
    return a+b+c;
}
int sum(int a, int b)
{
    return a+b;
}
float sum(float a, float b)
{
    return a+b;
}
int main()
{
    cout<<"Sum fun with two parameter : "<<sum(10,20)<<endl;
    cout<<"Sum fun with three parameter : "<<sum(10,20,30)<<endl;
    cout<<"Sum fun with two parameter and float : "<<sum(10.25f,20.50f)<<endl;
    return 0;
}
/*
Output:
Sum fun with two parameter : 30
Sum fun with three parameter : 60
Sum fun with two parameter and float : 30.75
*/
