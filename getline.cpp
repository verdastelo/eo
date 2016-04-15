#include <iostream>
#include <string>

using namespace std;

int main() {
  string mojafraza; // моя фраза
  cout << "Как вас зовут? ";
  getline (cin, mojafraza);
  cout << "Привет, " << mojafraza << ".\n";
  cout << "The string is " << mojafraza.size();
  cout << " characters long.\n";
  return 0;
}
