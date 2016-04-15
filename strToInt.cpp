#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
  string mystr;
  int price;
  cout << "Enter price: ";
  getline (cin, mystr);
  stringstream (mystr) >> price;
  cout << "Total price is: " << price + 10 << "\n";
  return 0;
}
