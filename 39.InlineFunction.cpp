/*Inline fucntion 

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
    cout<<"Cube is : "<<cube(2)<<endl;
    return 0;
}
/*Output

*/