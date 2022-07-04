#include <iostream>

using namespace std;

int main() {
  cout << "Enter bith month as a number" << endl;
  int month;
  cin >> month;
  if ((month > 0)&&(month < 13)){
    if (month == 1)
    cout << "Garnet\n";
    if(month == 2)
    cout << "Amethyst\n";
    if(month == 3)
    cout << "Aquamarine\n";
    if(month == 4)
    cout << "Diamond\n";
    if(month == 5)
    cout << "Emerald\n";
    if(month == 6)
    cout << "Alexandrite\n";
    if(month == 7)
    cout << "Ruby\n";
    if(month == 8)
    cout << "Peridot\n";
    if(month == 9)
    cout << "Saphire\n";
    if(month == 10)
    cout << "Pink Toumaline \n";
    if(month == 11)
    cout << "Topaz\n";
    if(month == 12)
    cout << "Blue Topaz\n";

    else
      return 0; // forgot to add else, fixed it
  }
}