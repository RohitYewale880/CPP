///Calculate Total and Percentage Using Call By Address (In cpp)

using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>

void Calculate(int, int, int, int*, float*);

int main()
{
    int Phy = 0, Chem = 0, Maths = 0, Total_Marks = 0;
    float Percent = 0.0;

    cout << "\n Enter 3 Subjects Marks : ";
    cout << "\n Enter Physics Marks: ";
    cin >> Phy;
    cout << "\n Enter Chemistry Marks: ";
    cin >> Chem;
    cout << "\n Enter Maths Marks: ";
    cin >> Maths;

    Calculate(Phy, Chem, Maths, &Total_Marks, &Percent);


    cout << "\n\n Student Report Card..\n";
    cout << "\n\n Physics        = " << Phy;
    cout << "\n Chemistry      = " << Chem;
    cout << "\n Maths          = " << Maths;
    cout << "\n\n Total Marks  = " << Total_Marks;
    cout << "\n\n Percentage     = " << Percent;

    getch();
    return 0;
}

void Calculate(int P, int C, int M, int *Tot, float *Per)
{
    *Tot = P + C + M;
    *Per = ((float)(*Tot)) / 3 ;
    return;
}
