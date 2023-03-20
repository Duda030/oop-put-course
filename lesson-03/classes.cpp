#include <iostream>

using namespace std;

class Quad{
private:
    int a;
    int b;
public:
    Quad(int a, int b){
        this->a = a;
        this->b = b;
    }
    int GetA(){
        return this->a;
    };
    int GetB(){
        return this->b;
    };
};

class Calculator{
    public:
    void Calc(Quad q){
        int x;
        x = q.GetA()*q.GetB();
        cout<<x<<endl;
    }
};



int main()
{
    Quad rectangle(5,6);
    Calculator c;
    c.Calc(rectangle);
    return 0;
};