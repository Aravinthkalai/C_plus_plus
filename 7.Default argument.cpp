/*Example 2*/
#include<iostream>
using namespace std; 
int sum(int a, int b, int c = 2)
{
    return a+b+c;
}
int main()
{
    cout<<"Sum fun with two parameter : "<<sum(10,20)<<endl;
}
/*
Output:
Sum fun with two parameter : 30
Sum fun with three parameter : 60
Sum fun with two parameter and float : 30.75
*/