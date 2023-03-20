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
   int Calc(){
       int x;
       x = this->a*this->b;
       return x;
         }
     };

 class Printer{
    public:
    void print(Quad x){
        int a = x.Calc();
        cout<<a<<endl;
    };
 };



 int main()
 {
    Quad rectangle(5,8);
    Printer a;
    a.print(rectangle);

    return 0;
 }