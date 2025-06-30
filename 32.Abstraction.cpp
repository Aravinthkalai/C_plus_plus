
/*
* If a class contains atleast one pure virtual function 
  it is called abstraction.
* It is not allowed to create an object for pure virtual function
  but it is possible to create a pointer object
*/
/*Example : 1 */
#include <iostream>
using namespace std;
class BaseClass //Abstract class
{
  public:
    virtual void Display1()=0; //Pure virtual function or abstract function
    virtual void Display2()=0; //Pure virtual function or abstract function
    void Display3()
    {
      cout<<"\n\tThis is Display3() method of Base Class";
    }
};

class DerivedClass : public BaseClass
{
  public:
    void Display1()
    {
      cout<<"\n\tThis is Display1() method of Derived Class";
    }
    void Display2()
    {
      cout<<"\n\tThis is Display2() method of Derived Class";
    }
};

int main()
{

/* The below line will through error since we can't create object for 
   a abstract class, if one pure virtual function is present inside the
   class then it is called abstract class, so we can only create and access 
   everthing inside base class via derived class
*/
  //  BaseClass b; // error

  DerivedClass D;
  D.Display1();
  D.Display2();
  D.Display3(); 
  return 0;

}
/*
Output
	This is Display1() method of Derived Class
	This is Display2() method of Derived Class
	This is Display3() method of Base Class
*/