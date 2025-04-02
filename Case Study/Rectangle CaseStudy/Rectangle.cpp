/// calculate area and perimeter of rectangle..

#include <iostream>
#include <conio.h>
using namespace std;

class Rectangle
{
public:
    /// Data Members
    float Length, Width, Area, Perimeter;

    /// Constructors Declaration
    Rectangle();
    Rectangle(float Length, float Width);
    Rectangle( Rectangle &rRef);

    /// Destructor
    ~Rectangle();

    /// Member Functions
    void Calculate_Area();
    void Calculate_Perimeter();
    void Display();

private:
    /// Constant Data Member
    const float Factor;
};

int main()  /// Entry Point Function
{
    Rectangle Rect1;

    Rect1.Calculate_Area();  /// Function Call
    Rect1.Calculate_Perimeter(); /// Function Call
    Rect1.Display(); /// Function Call

    Rectangle Rect(10.5, 5.5);  /// Object created, parameterized constructor call

    Rect.Calculate_Area();  /// Function Call
    Rect.Calculate_Perimeter(); /// Function Call
    Rect.Display(); /// Function Call

    getch();
    return 0;
}

/// Default Constructor
Rectangle::Rectangle() : Factor(2)
{
    cout << "We Are Inside Of Default Constructor" << endl;
    Length = Width = Area = Perimeter = 0.0;
}

/// Parameterized Constructor
Rectangle::Rectangle(float L, float W) : Factor(2)
{
    cout << "We Are Inside Of Parameterized Constructor" << endl;
    Length = L;
    Width = W;
    Area = Perimeter = 0.0;
}

/// Copy Constructor
Rectangle::Rectangle( Rectangle &rRef) : Factor(2)
{
    cout << "We Are Inside Of Copy Constructor" << endl;
    Length = rRef.Length;
    Width = rRef.Width;
    Area = rRef.Area;
    Perimeter = rRef.Perimeter;
}

/// Destructor
Rectangle::~Rectangle()
{
    cout << "We Are Inside Of Destructor" << endl;
    system("cls");
    cout << "Thanks For Using This Application" << endl;
}

/// Function Defination Calculate Area
void Rectangle::Calculate_Area() {
    Area = Length * Width;
}

/// Function Defination Calculate Perimeter
void Rectangle::Calculate_Perimeter()
{
    Perimeter = Factor * (Length + Width);
}

/// Function Defination Display Values
void Rectangle::Display()
{
    cout << "Length of Rectangle: " << Length << endl;
    cout << "Width of Rectangle: " << Width << endl;
    cout << "Area of Rectangle: " << Area << endl;
    cout << "Perimeter of Rectangle: " << Perimeter << endl;
}
