#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  const int tests = 3;
  const int students = 5;
  int studentscores [tests][students];
  int totalstudents[5];
  int totaltests[15];
  int sum = 0;
  int sumtests = 0;

  ifstream inFile;
  string filename;
  cout << "Please enter the filename: ";
  cin >> filename;
  inFile.open(filename);

  cout << "The average per student is: ";
  for (int s = 0; s < students; s++)
  {
    sum = 0;
    for (int t = 0; t < tests; t++)
    {
    inFile >> studentscores[s][t];
    sum = sum + studentscores[s][t];
    }
  totalstudents[s] = sum;
  double avgofstudent = totalstudents[s] / 3;
    cout << setprecision(2) << fixed;
    cout << avgofstudent << " ";
  }
  cout << endl;

  cout << "The average of each test is: ";
  for (int t = 0; t < tests; t++)
  {
    sumtests = 0;
    for (int s = 0; s < students; s++)
    {
      inFile >> studentscores[s][t];
      sumtests = sumtests + studentscores[s][t];
    }
    totaltests[t] = sumtests;
    double avgoftests = totaltests[t] / 5;
    cout << setprecision(2) << fixed;
    cout << avgoftests << " ";
  }
  cout << endl;

  double higherstscore = 0;
  double numofAs = 0;
  for (int s = 0; s < students; s++)
  {
  for (int t = 0; t < tests; t++)
  {
    if (studentscores[s][t] > higherstscore)
    {
    higherstscore = studentscores[s][t];
    }
  if (studentscores[s][t] >= 90)
  {
    numofAs++;
  }
  }
  }

cout << "The highest test score is: " << higherstscore << endl;
cout << "The amount of 'A' letter grades (score of 90+) is: " << numofAs << endl;

inFile.close();

return 0;
}