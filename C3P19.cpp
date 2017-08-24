// Chapter 3, Programming Challenge 19
// C3P19.cpp
// Matt Ingold
// 2/8/17

// A program that takes user input relating to their loan structure
// and outputs a neatly formatted table.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double dblLoanAmt, dblAPR, dblMonthlyRate, dblMonthlyPayment;
	double dblTotalAmtPaid, dblInterestPaid, dblMonthlyRateAsPercentage;
	int intNumPayments;
	string placeholder;

	// Inform the user that you will be instructing them for input.
	cout << "Welcome, this program will request your input for some details about your loan." << endl;
	cout << "Press Enter when you're ready to begin.";
	getline(cin, placeholder);

	// Get loanAmt, APR, and numPayments from the user
	cout << "What is the principal amount of the loan? ";
	cin >> dblLoanAmt;

	cout << "Alright, how many payments are you scheduled to make? ";
	cin >> intNumPayments;

	cout << "Finally, please enter your annual interest rate (APR) in the form of a decimal." << endl;
	cout << "(For example, if your APR is 12%, you would enter .12) ";
	cin >> dblAPR;

	cout << "\n\nThank you.\n\n\n\n";

	// Calculate monthlyRate, monthlyPayment, totalAmtPaid, and interestPaid
	dblMonthlyRate = dblAPR / 12;
	dblMonthlyPayment = (dblMonthlyRate * pow((1 + dblMonthlyRate), intNumPayments)) /
		(pow((1 + dblMonthlyRate), intNumPayments) - 1) * dblLoanAmt;
	dblTotalAmtPaid = intNumPayments * dblMonthlyPayment;
	dblInterestPaid = dblTotalAmtPaid - dblLoanAmt;
	dblMonthlyRateAsPercentage = dblMonthlyRate * 100;


	// Display a table with all our information
	cout << setw(25) << left << "Loan Amount:" << setw(1) << "$" << setw(9) << right
		<< setprecision(2) << fixed << dblLoanAmt << endl;
	cout << setw(25) << left << "Monthly Interest Rate:" << setw(1) << setw(9) << right
		<< setprecision(2) << fixed << to_string(dblMonthlyRateAsPercentage) + "%" << endl;
	cout << setw(25) << left << "Number of Payments:" << setw(1) << setw(9) << right
		<< intNumPayments << endl;
	cout << setw(25) << left << "Monthly Payment:" << setw(1) << "$" << setw(9) << right
		<< setprecision(2) << fixed << dblMonthlyPayment << endl;
	cout << setw(25) << left << "Amount Paid Back:" << setw(1) << "$" << setw(9) << right
		<< setprecision(2) << fixed << dblTotalAmtPaid << endl;
	cout << setw(25) << left << "Interest Paid:" << setw(1) << "$" << setw(9) << right
		<< setprecision(2) << fixed << dblInterestPaid << endl;

	return 0;


}