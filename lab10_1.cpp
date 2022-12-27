#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, interest, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i = 0;
	while(loan>0){
			
			cout << fixed << setprecision(2); 
			cout << setw(13) << left <<	i+1; 
			cout << setw(13) << left << loan;
			double Interest = loan*interest/100;
			cout << setw(13) << left << Interest;
			double Total = loan+Interest;
			cout << setw(13) << left << Total;
			if(pay > Total){
				pay = Total;
			}
			cout << setw(13) << left << pay;
			double NewBalance = Total-pay;
			cout << setw(13) << left << NewBalance;
			cout << "\n";
			loan = NewBalance;
			i++;
			}

	
	return 0;
}
