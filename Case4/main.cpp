#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int n = 0, even = 0, odd = 0, sum = 0, number;
float avg;
ifstream readfile;
string (filename);
cout << "Enter the name of the file you are opening: ";
cin >> filename;
readfile.open(filename);
char output[10];
if (readfile.is_open()) {
  while (!readfile.eof()) {
    readfile >> output;
    number = atoi(output);
    if (number % 2==0){
      even ++;  
    }
    else {
      odd++;
    }
    sum += number;
    n++;
  }
}
avg = sum/n;
cout << "The amount of numbers in the file is: " << n << endl;
cout << "The even numbers in the file are: " << even << endl;
cout << "The odd numbers in the file are: " << odd << endl;
cout << "The sum of all numbers in the file is: " << sum << endl;
cout << "The average of the numbers in the file is: " << avg << endl;
readfile.close();

return 0;
}