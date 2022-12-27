#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double l,inter,pm,last;
    int year = 1;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> pm;
    	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	double nb=l;
       
	for (int i = 0; nb>0; i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year+i; 
	cout << setw(13) << left << nb;
	cout << setw(13) << left << nb*inter/100;
	
	nb+=nb*inter/100;
	
	cout << setw(13) << left << nb;
	 
	 if (nb < pm) pm = nb;
    
	cout << setw(13) << left << pm;
	
	if (nb-pm<=0) last = 0;
	else last =nb-pm;
	
	cout << setw(13) << left << last;
	
	nb=last;
	
	cout << "\n";	
	}
	return 0;
}