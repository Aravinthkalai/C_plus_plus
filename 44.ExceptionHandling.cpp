// /*Exception handling

// */
// #include<iostream>

// using namespace std;


// int main()
// {
//     int a=0,b=0,c;
//     cout<<"Enter A : "<<endl;
//     cin>>a;
//     cout<<"Enter B : "<<endl;
//     cin>>b;
//     try
//     {
//         if(b==0)
//         {
//             //throw -1;
//            //throw 10.21;
//              throw string("-1");
//         }
//         c = a/b;
//         cout<<"Div : "<<c<<endl;
//     }
//     //catch(int a)
//  //   catch(double a)
//     catch(string a)
//     {
//         cout<<"Error No: "<<a<<" can't divide by zero"<<endl;
//     }
//     return 0;
// }
// /*Output
// Enter A : 
// 25
// Enter B : 
// 0
// Error No: -1 can't divide by zero
// */

/*Exception handling

*/
#include<iostream>

using namespace std;

int division(int x, int y)
{
    if(y == 1)
    {
        throw string("Anything div by 1 is the same number");
    }
    if(y==0)
    {
        throw 1;
    }
    if(x==0)
    {
        throw 'A';
    }
    if(x==1 && y==1)
    {
        throw 1.2;
    }
    return x/y;
}

int main()
{
    int a=0,b=0,c=0;
    cout<<"Enter A : "<<endl;
    cin>>a;
    cout<<"Enter B : "<<endl;
    cin>>b;
    try
    {
        cout<<"Div : "<<division(a,b)<<endl;
    }
    catch(int a)
    {
        cout<<"Error No: "<<a<<" can't divide by zero"<<endl;
    }
    catch(double a)
    {
        cout<<"Error No: "<<a<<" one div by one is one"<<endl;
    }
    catch(char a)
    {
        cout<<"Error No: "<<a<<" Zero divide by anything is zero"<<endl;
    }
    catch (...)
    {
        cout<<"General catch handbler: "<<endl;
    }
    return 0;
}
/*Output1 
Enter A : 
25
Enter B : 
0
Error No: 1 can't divide by zero

Output2 
Enter A : 
0
Enter B : 
0
Error No: 1 can't divide by zero

Output3 
Enter A : 
1
Enter B : 
1
Error No: 1.2 one div by one is one

Output4
Enter A : 
25
Enter B : 
1
General catch handbler: 
*/