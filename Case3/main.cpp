#include <iostream>
using namespace std;
int main()
{
const double price_a = 39.99,
data_a = 4,
charge_a = 10,

price_b = 59.99,
data_b = 8,
charge_b = 5,

price_c = 69.99;

char package_choice;

cout << "\nPackage A: For $39.99 per month 4 Gigabytes are provided. \n"
<< "\nAdditional data is $10 per Gigabyte.\n"
<< endl;
cout << "\nPackage B: For $59.99 per month 8 Gigabytes are provided. \n"
<< "\nAdditional data is $5 per Gigabyet. \n"
<< endl;
cout << "\nPackage C: For $69.99 per month with unlimited data and no extra charges\n"
<< endl;

cout << "Choose Package: ";
cin >> package_choice;
cout << endl;

switch (package_choice)
{
int data_used;
float total_charges;

case 'a':
case 'A':
case 'b':
case 'B':
case 'c':
case 'C':
cout << "How much data was used (in Gigabytes)? ";
cin >> data_used;
cout << endl;

if (data_used < 0)
{
  cout << "\nWe're sorry. Data must be greater than 0.\n"
  << "Rerun the program and try again."
  << endl;
}
else
{
  cout << "Total monthly charges: ";
if (package_choice == 'a' || package_choice == 'A')
  {
  total_charges = data_used > data_a
  ? price_a + ((data_used - data_a) * charge_a):
  price_a;
}
else if (package_choice == 'b' || package_choice == 'B')
{
  total_charges = data_used > data_b
  ? price_b + ((data_used - data_b) * charge_b):
  price_b;
}
else if (package_choice == 'c' || package_choice == 'C')
{
  total_charges = price_c;
}
  cout << total_charges << endl;
}
break;

default:
cout << "We're Sorry. package choice must be "
<< "A, B, or C.\n"
<< "Rerun the program and try again."
<< endl;
break;
}
cout << endl;

return 0;
}