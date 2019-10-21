#include <iostream>
#include <string>
#include "HealthHeader.h"
using namespace std;
int main()
{
	string fname, lname; char g; int YYYY;
	float h, w;
	cout << "Enter your first name, last name, gender and year of birth (first name, last name, gender, year): ";
	cin >> fname >> lname >> g >> YYYY;
	cout << "Enter your height (in inches) and weight (in pounds): ";
	cin >> h >> w;
	HealthProfile myProfile(fname, lname, g, YYYY, h, w);
	cout << "Your name is " << myProfile.getFirstName() << myProfile.getLastName() << endl;
	cout << "You are " << myProfile.getAge() << " years old" << endl;
	cout << "Your maximum heart rate is " << myProfile.getMaximumHeartRate() << endl;
	cout << "Your target heart rate is " << myProfile.getTargetHeartRate() << endl;
	cout << "Your BMI is " << myProfile.getBMI() << endl;
	cout << "BMI VALUES\n";
	cout << "Underweight= less than 18.5\n";
	cout << "Normal= between 18.5 and 24.9\n";
	cout << "Overweight= between 25 and 29.9\n";
	cout << "Obese= 30 or greater\n";

	return 0;
}