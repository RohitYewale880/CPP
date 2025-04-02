///write a program to calculate the area and circumference of circle..
using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
  public:

      ///   Data Members
      float Radius, Area, Circum;

      ///   Constructors Declaration
      Circle();
      Circle(float Radius);
      Circle(const Circle &cRef);

      /// Destructor
      ~Circle();

      ///     Member Functions
      void Calculate_Area();
      void Calculate_Circumference();
      void Display();

  private:

      ///   Constant Data Member
      const float PI ;
};

int main()      /// Entry point Function
{

    Circle Calc1;

    Calc1.Calculate_Area();  /// function call

    Calc1.Calculate_Circumference(); /// function call

    Calc1.Display(); /// Function call

    Circle Calc(5.5);       /// Object created Parameterized constructor call

    Calc.Calculate_Area();  /// function call

    Calc.Calculate_Circumference(); /// function call

    Calc.Display(); /// Function call

    getch();

    return 0;
}

Circle::Circle():PI(3.14)
{
    cout<< "We Are Inside Of Default Constructor"<< endl;
    Radius = Area = Circum = 0.0;
}

Circle::Circle(float Rad):PI(3.14)
{
    cout<< "We Are Inside Of Parameterized Constructor"<< endl;
    Radius = Rad;
    Area = Circum = 0.0;
}

Circle::Circle(const Circle &cRef):PI(3.14)
{
    cout<< "We Are Inside Of Copy Constructor"<< endl;
    Radius = cRef.Radius;
    Area = cRef.Area;
    Circum = cRef.Circum;
}

Circle::~Circle()
{
    cout<< "We Are Inside Of Destructor"<< endl;
   system("cls");
   cout<<"Thanks For Using This Application"<<endl;
}

void Circle::Calculate_Area()
{
    Area = PI * Radius * Radius;
}

void Circle::Calculate_Circumference()
{
    Circum = 2 * PI * Radius;
}

void Circle::Display()
{
    cout << "Radius of Circle: " << Radius << endl;
    cout << "Area of Circle: " << Area << endl;
    cout << "Circumference of Circle: " << Circum << endl;
}
