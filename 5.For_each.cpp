/*Example 1*/
#include<iostream>
using namespace std; 
int main()
{
    int a[]={65,65,89,85,89,52,952};
    /*The 'for each' concept is that we have to declare a variable inside the for loop with 
    the same type as the array and separate the array using the : operator, so it will 
    automatically fetch all the array values.*/
    for(int x: a) 
    {
        cout<<x<<",";
    }
    cout<<"Char type : ";
   /*if we change the data type then it will automatically do a type cast*/
    for(char x: a) 
    {
        cout<<x<<",";
    }
    cout<<endl;
    /*if we use auto then during run time it will automatically fetch the
    data type an prints the value */
    cout<<"auto type : ";
    for(auto x: a) 
    {
        cout<<x<<",";
    }
    cout<<endl;
    return 0;
}
/*
Output:
65,65,89,85,89,52,952,Char type : A,A,Y,U,Y,4,�,
auto type : 65,65,89,85,89,52,952,
*/