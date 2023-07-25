#include <iostream>
using namespace std;

int main()
{
  const int CUST_SURVEYED = 16500;

  float percent_1_or_more = .15,
  percent_prefer_citrus =  .58,
  total_1_or_more = CUST_SURVEYED * percent_1_or_more,
  total_prefer_citrus = total_1_or_more * percent_prefer_citrus,
  total_non_energy = CUST_SURVEYED - total_1_or_more;

  cout << endl << endl;
  cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: ";
  cout << total_1_or_more << endl;
  cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks: ";
  cout << total_prefer_citrus << endl;
  cout << "The approximate number of customers in the survey who purchase any other drink but energy drinks per week: ";
  cout << total_non_energy << endl;
  return 0;
}