///Accept and display the product details...

#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class Product
{
public:
    Product();
    Product(int);
    ///Product(&CProd);

    void Accept_Product_Details();
    void Display_Product_Details();

    ~Product();
private:
    char P_Name[40];
    int Product_Id;
    float P_Price;
    float S_Price;
    int C_Stock;
    static int P_Cnt;
};
int main()
{
    Product Prod;

    Prod.Accept_Product_Details();
    Prod.Display_Product_Details();

    getch();
    return 0;
}
/// Default Constructor
Product::Product()
{
    Product_Id = 0;
    P_Price = 0.0;
    S_Price = 0.0;
    C_Stock = 0.0;

}
Product::~Product()
{
    cout<< "\n We Are Inside Of Destructor"<<endl;
}
void Product :: Accept_Product_Details()
{
        cout<<"\n ================*******================";
        cout<<"\n ACCEPT Product ";

        fflush(stdin);

        cout<<"\n Enter Product Id : ";
        cin>>Product_Id;

        cout<<"\n Enter Product Name :";
        cin>>P_Name;

        fflush(stdin);

        cout<<"\n Enter Product purchase Price : ";
        cin>>P_Price;

        cout<<"\n Enter Product Sale Price : ";
        cin>>S_Price;

        cout<<"\n Enter Product Current Stock => ";
        cin>>C_Stock;

        cout<<"\n ================*******================";

        system("cls");

    return;

}
void Product::Display_Product_Details()
{


        cout<<"\n ================*******================"<<endl;
        cout<<"\n\t DISPLAY PRODUCTS"<<endl;
        cout<<"\n Product Id             =>"<< Product_Id<<endl;
        cout<<"\n Product Name           =>"<< P_Name<<endl;
        cout<<"\n Product purchase Price => "<< P_Price<<endl;
        cout<<"\n Product Seals Price    => "<< S_Price<<endl;
        cout<<"\n Product Current Stock  => "<<C_Stock<<endl;
        cout<<"\n ================*******================";

return;

}
