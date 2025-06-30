/*Inline fucntion 
* An inline function is a function where the compiler attempts to
replace the function call with the actual code of the function to 
reduce the overhead of a function call.
* The inline keyword is a request, not a command. The compiler may or 
  may not inline the function.
* It uses cache to save jumping between memory (stack size will reduce)
* If the function is called 1000 times, the code appears 1000 times → increased binary (executable) size.
* Use it if the function has two lines and called very rare condition
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