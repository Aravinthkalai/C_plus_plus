/*
Hierarchical inheritance
Hierarchical inheritance, more than one class inherits from a single base class
*/

#include<iostream>
using namespace std;
/*
shape is main base class, if all other classes uses
this base class then it is called hierarchical inheritance 

next level: rectange, circle, square are the base class
see picture from more understanding

*/
class shape
{
    public:
        float length, breadth, radius;
};

class rectangle:public shape{
    public:
    void getRectangleDetails()
    {
        cout<<"Enter length : ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    float rectange_area()
    {
        return length*breadth;
    }
};

class circle:public shape{
    public:
    void getCircleDetails()
    {
        cout<<"Enter radius : ";
        cin>>radius;
    }
    double circle_area()
    {
        return 3.14*(radius*radius);
    }
};

class square:public shape{
    public:
    void getSquareDetails()
    {
        cout<<"Enter side : ";
        cin>>length;
    }
    double square_area()
    {
        return length*length;
    }
};
int main()
{
    rectangle r;
    circle c;
    square s;
    r.getRectangleDetails();
    c.getCircleDetails();
    s.getSquareDetails();
    cout<<"Rectange area: "<<r.rectange_area()<<endl;
    cout<<"circle area: "<<c.circle_area()<<endl;
    cout<<"Square area: "<<s.square_area()<<endl;

    return 0;
}
/*
Output:
Enter length : 20
Enter breadth: 4
Enter radius : 5
Enter side : 5
Rectange area: 80
circle area: 78.5
Square area: 25
*/