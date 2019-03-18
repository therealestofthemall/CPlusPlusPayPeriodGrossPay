// PayPeriodGrossPay.cpp : This file contains the 'main' function. Program execution begins and ends there.
// C++ Early Objects Eight Edition Chapter 2 Exercise #13 "Pay Period Gross Pay"
// Author: Steven Love 3/17/19

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// variables

	double grossPay = 32500;
	int twiceperMonthYear = 24;
	int biweeklyMonthYear = 26;
	double grossPayTwicePerMonth;
	double grossPayBiWeeklyPerMonth;


	// calculations
	// gross pay twice per month for a year
	grossPayTwicePerMonth = grossPay / twiceperMonthYear;

	// gross pay bi-weekly per month for a year
	grossPayBiWeeklyPerMonth = grossPay / biweeklyMonthYear;


	// outputs
	cout << " Gross Pay is $ " << grossPay << '\n';
	cout << " Gross Pay distributed twice per month for a year $ " << grossPayTwicePerMonth << '\n';
	cout << " Gross Pay distrubuted bi-weekly per month for a year $ " << grossPayBiWeeklyPerMonth << '\n';
	

	system("pause");
}

