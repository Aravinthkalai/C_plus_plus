/*Lambda Expression/Function
lambda function is same like inline 
very simple functions can be used like mentioned below
*/
#include<iostream>
using namespace std;

inline int cube(int x)
{
    int result = x*x*x;
    return result;
}

int main()
{
    auto sum =[](int a, int b){return a+b;};
    cout<<"Total : "<<sum(2,3)<<endl;
    return 0;
}
/*Output
Total : 5
*/