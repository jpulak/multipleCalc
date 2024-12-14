/******************************************************************************
Calculating money spent on food through a break down of tax and not tax
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
        //initializing variables
    
	int chili; // $8.5
	int corn; // $7
	int chips; // $2.5
	int drink; // $4.5
	int water; // $4
	double taxable;
	double taxamount;
	double nontax;
	double total;

        //gathering inputs
    
	cout <<"How many chili dogs were sold? ";
	cin >> chili;
	cout << "How many corn dogs were sold? ";
	cin >> corn;
	cout << "How many bags of chips were sold? ";
	cin >> chips;
	cout << "How many soft drinks were sold? ";
	cin >> drink;
	cout << "How many bottles of water were sold? ";
	cin >> water;

	// tax 6.5; calculate all amounts

	taxable = ((chili * 8.5)) + ((corn * 7)) + ((chips * 2.5)) + ((drink * 4.5));
	taxamount = (0.065 * (chili * 8.5)) + (0.065 * (corn *7 )) + (0.065 * (chips * 2.5)) + (0.065 * (drink * 4.5));
	nontax = (water * 4);
	total = taxable + taxamount + nontax;

        // new line
    
	cout << endl;
	
	//output formatted answers

	cout << left << setw(15) << "Taxable: " << "$";
	cout << right << setw(10) << fixed << setprecision(2) << taxable << endl;
	cout << left << setw(15) << "Tax amount: " << "$";
	cout << right << setw(10) << fixed << setprecision(2) << taxamount << endl;
	cout << left << setw(15) << "Non-taxable: " << "$";
	cout << right << setw(10) << fixed << setprecision(2) << nontax << endl;
	cout << left << setw(15) << "Total:" << "$";
	cout << right << setw(10) << fixed << setprecision(2) << total << endl;
	return 0;
}
