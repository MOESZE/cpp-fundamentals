#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
char fname[30], lname[30];
const int ONE = 1,
HUNDRED = 100,
MONTHS = 12;

int N;

float monthly_interest_rate,
loan_amt,
payment_amt,
paid_back,
interest_paid;


cout << "What is your first name?" << endl ;
cin >> fname;
cout << "What is your last name?" << endl;
cin >> lname;
cout << "What is the interest rate on the loan? %" << endl ;
cin >> monthly_interest_rate;
cout << "What is the amount of the loan? " << endl ;
cin >> loan_amt;
cout << "What is the number of payments? " << endl ;
cin >> N;

monthly_interest_rate /= HUNDRED;

payment_amt = ((monthly_interest_rate) * pow(ONE + (monthly_interest_rate), N) / (pow(ONE + (monthly_interest_rate), N) - ONE)) * loan_amt;

monthly_interest_rate *= HUNDRED;

paid_back = N * payment_amt;

interest_paid = (N * payment_amt) - loan_amt;

cout << setprecision(2) << fixed << right << endl;

cout << "Loan Amount:               $";
cout << setw(10) << loan_amt << endl;

cout << "Monthly Interest Rate:     ";
cout << setw(10) << monthly_interest_rate << '%' << endl;

cout << "Number of Payments:         ";
cout << setw(10) << N << endl;

cout << "Monthly Payment:           $";
cout << setw(10) << payment_amt << endl;

cout << "Amount Paid Back:          $";
cout << setw(10) << paid_back << endl;

cout << "Interest Paid:             $";
cout << setw(10) << interest_paid << endl;

cout << fname << " " << lname << " " << "paid a total interest in the amount of $" << interest_paid << " in " << N << " months" << endl;

return 0;
}