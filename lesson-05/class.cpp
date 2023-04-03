#include <iostream>
using namespace std;

class Shape{
    public:
    virtual int calcArea() = 0;
};

class Rectangle : public Shape{
    double width;
    double heigth;
    public:
    Rectangle(){
      this -> width = 0.0; 
      this -> heigth = 0.0;
    };
    void Width(double w){
        this -> width = w;
    };
    void Heigth(double h){
        this -> heigth = h;
    };
    int calcArea(){
        return (width*heigth);
    };
};

class Triangle : public Shape{
    double width;
    double heigth;
    public:
    Triangle(){
      this -> width = 0.0; 
      this -> heigth = 0.0;
    };
    void Width(double w){
        this -> width = w;
    };
    void Heigth(double h){
        this -> heigth = h;
    };
    int calcArea(){
        return ((width*heigth)/2);
    };
};

int main()
{
    Rectangle Pep;
    Pep.Heigth(2);
    Pep.Width(2);
    cout<<Pep.calcArea()<<"\n";
    Triangle Tep;
    Tep.Heigth(2);
    Tep.Width(2);
    cout<<Tep.calcArea()<<"\n";

    return 0;
}
