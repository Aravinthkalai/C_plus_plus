/*Lambda Expression/Function
lambda function is allow to define anonymous inline functions
very simple functions can be used like mentioned below
syntax:
[capture](parameters) -> return_type {
    // function body
};

*/
//Example 1: Basic Lambda function

#include<iostream>
using namespace std;

inline int cube(int x)
{
    int result = x*x*x;
    return result;
}

int main()
{
    auto hello =[]()
    {
      cout<<"Hello from lambda function"<<endl;
    };
    hello();
    return 0;
}
/*Output
Hello from lambda function
*/


//Example 1: Basic Lambda function with return type and parameter
#include<iostream>
using namespace std;

inline int cube(int x)
{
    int result = x*x*x;
    return result;
}

int main()
{
    /*->int --> specifies the return type if I use char instead of int 
                then we will get  as output beacuse it will auto type
                cast the return 
    */
    auto sum =[](int a, int b) -> int
    {
        return a+b;
    };
    cout<<"Total : "<<sum(2,3)<<endl;
    return 0;
}
/*Output
Total : 5
*/

//Example 3: Lambda function with capture settings  
#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 10;
    auto show = [=]() {
        cout << "x = " << x << endl;  // uses a copy
    };
    
    auto modify = [&]() {
        y += 5;  // modifies y in the outer scope
    };
    show();
    modify();
    cout << "y = "<<y;  // Output: 15
    return 0;
}
/*Output
Total : 5
*/

/*
Lambda function important notes:

| Syntax Part      | Description                                     |
| ---------------- | ----------------------------------------------- |
| `[ ]`            | Capture list — tells lambda what to capture     |
| `( )`            | Parameters — like regular function arguments    |
| `-> return_type` | Return type — optional if deduced automatically |
| `{ }`            | Function body — what the lambda does            |

| Capture Style | Syntax | Means                                 | Modifies Original? |
| ------------- | ------ | ------------------------------------- | ------------------ |
| By value      | `[=]`  | Copies outer variables into lambda    | ❌ No               |
| By reference  | `[&]`  | Captures reference to outer variables | ✅ Yes              |

[=] like getting function parameter eg: void fun(int a, int b)
[&] like getting function parameter in the form of address eg: void fun(int &a, int &b)

| Capture List | Meaning                                      |
| ------------ | -------------------------------------------- |
| `[ ]`        | Capture nothing                              |
| `[=]`        | Capture all used variables by **value**      |
| `[&]`        | Capture all used variables by **reference**  |
| `[x]`        | Capture variable `x` by **value**            |
| `[&x]`       | Capture variable `x` by **reference**        |
| `[=, &y]`    | Capture all by value except `y` by reference |
| `[&, x]`     | Capture all by reference except `x` by value |

*/