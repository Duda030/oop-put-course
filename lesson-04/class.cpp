#include <iostream>
using namespace std;


class Book
{
  double price;
public:
  double cost ()
  {
    return this->price;
  };
  Book ()
  {
    this->price = 0.0;
  };
  Book (double mny)
  {
    this->price = mny;
  };
  Book (float mny):Book (static_cast < double >(mny))
  {
  };
  Book (int mny):Book (static_cast < double >(mny))
  {
  };

};

int
main ()
{
  Book floatBook (42.02f);
  Book intBook (42);
  Book doubleBook (42.42);
  cout << floatBook.cost () << endl;
  cout << intBook.cost () << endl;
  cout << doubleBook.cost () << endl;

  return 0;
}
