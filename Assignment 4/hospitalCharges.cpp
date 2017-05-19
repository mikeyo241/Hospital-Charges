// Program Name:	Hospital Charges
// Chapter:			Chapter 5  - Functions
// Pg. / Ex.:		Pg. 202 Ex. 6
// Programmer:		Michael A Gardner
// Date:			31 March 2016
// Description:		This program calculates the cost of the hospital stay, the miscellaneous charges, and the overall total charges of the hospital stay.
//					This program uses functions for all the calculations in the program.

#include <iomanip>
//#include <cmath>
#include <iostream>
#include <string>
using namespace std;

//  **  Global Constants  **
const double DAILY_HOSPITAL_CHARGE = 350;

//  ** Function Prototypes  **
double calcStayCharges(int days);
double calcMiscCharges(double med, double surgical, double lab, double physical);
double calcTotalCharges(double hospitalStay, double miscCharges);

int main()
{

	//  ** Varables **  
	int 
		days = 0;
	double
		medicationCharges = 0,
		surgicalCharges = 0,
		labFees = 0,
		physicalRehab = 0,
		hospitalStayCost = 0,
		miscellaneousCharges = 0,
		totalCost = 0;
	// This string is used to output the prompt when called.
	string
		prompt = "Enter the amount of ";

	// This formats all output to two decimal places.
	cout << fixed << setprecision(2);

	//  **  Imput from the user **

	// This gets the days spent at the hospital.
	cout << "Enter the number of days spent in the hospital: ";
	cin >> days;
	
	// This gets the medication charges.
	cout << prompt << "medication charges: $";
	cin >> medicationCharges;
	
	// This gets the surgical charges.
	cout << prompt << "surgical charges: $";
	cin >> surgicalCharges;

	// This gets the lab fees.
	cout << prompt << "lab fees: $";
	cin >> labFees;

	// This gets the physical Rehabilitaion cost.
	cout << prompt << "physical rehabilitation charges: $";
	cin >> physicalRehab;
	cout << endl;


	// This assigns the value the calcStayCharges function returns to the varable hospitalStayCost.
	// CalcStayCharges is a function that Calculates the charges for staying at the hospital.
	// The function passes the value for days from the main program to the function.
	hospitalStayCost = calcStayCharges(days);

	//This assigns the value the calcMiscCharges function returns to the varable miscellaneousCharges.
	// The calcMiscCharges function calculates the total of medication, surgical charges, lab fees, and physical rehab.
	// The function passes the value for medicationCharges, surgicalCharges, labFees, and physicalRehab from the main program to the function.
	miscellaneousCharges = calcMiscCharges(medicationCharges, surgicalCharges, labFees, physicalRehab);

	//This assigns the value the calcTotalCharges function returns to the varable totalCost.
	// The calcTotal Charges function calculates the total of the whole stay.
	// The function passes the value for hospitalStayCost and miscellaneousCharges from the main program to the function.
	totalCost = calcTotalCharges(hospitalStayCost, miscellaneousCharges);


	//  **  Output  **

	cout << "The cost of the hospital stay is $" << hospitalStayCost
		<< "\nThe cost of the miscellaneous charges is $" << miscellaneousCharges
		<< "\nThe total cost of the hospital stay is $" << totalCost;


	cout << endl << endl;  //Blank Line
	return 0;
}

//  **  Functions  **


// This function calculates the stay charges by multiplying the total days stayed by the daily hospital charge global constant.
double calcStayCharges(int days)
{
	return days * DAILY_HOSPITAL_CHARGE;
}

// This function calculates the total of miscellaneous charges by adding the cost of medical, surgical, lab fees, and physical rehab together.
double calcMiscCharges(double med, double surgical, double lab, double physical)
{
	return med + surgical + lab + physical;
}

// This function calculates the total by adding together the hospital charges and the misc charges.
double calcTotalCharges(double hospitalStay, double miscCharges)
{
	return hospitalStay + miscCharges;
}