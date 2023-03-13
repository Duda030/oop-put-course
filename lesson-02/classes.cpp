#include<iostream>
using namespace std;

class animal
{
public:
    string name;
    int age;
    string spieces;
};

class book{
public:
    string title;
    float price;
    string author;
};

int main(){

    book Book;
    Book.author = "Hienkiewicz";
    Book.title = "Ogniur i mieczur";
    Book.price = 15.99;
    cout<<Book.author<<" "<<Book.title<<" "<<Book.price;

    return 0;
}