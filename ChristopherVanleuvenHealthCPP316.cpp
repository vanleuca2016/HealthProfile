#include <iostream>
#include <string>
#include "HealthHeader.h"
using namespace std;

HealthProfile::HealthProfile(string fname, string lname, char g, int YYYY, float h, float w) // floats can use decimals. 
{
	setFirstName(fname);
	setLastName(lname);
	setGender(g);
	setyearOfBirth(YYYY);
	setHeight(h);
	setWeight(w);
}

void HealthProfile::setFirstName(string fname)
{
	firstName = fname;
}
string HealthProfile::getFirstName()
{
	return firstName;
}
void HealthProfile::setLastName(string lname)
{
	lastName = lname;
}
string HealthProfile::getLastName()
{
	return lastName;
}
void HealthProfile::setGender(char G)
{
	gender = G;
}
char HealthProfile::getGender()
{
	return gender;
}
void HealthProfile::setyearOfBirth(int YYYY)
{
	yearofBirth = YYYY;
}
int HealthProfile::getyearOfBirth()
{
	return yearofBirth;
}
void HealthProfile::setHeight(float h) // height in inches
{
	height = h;
}
float HealthProfile::getHeight()
{
	return height;
}
void HealthProfile::setWeight(float w)
{
	weight = w;
}
float HealthProfile::getWeight() // weight in pounds
{
	return weight;
}
int HealthProfile::getAge()
{
	int year;
	cout << "Enter current year: ";
	cin >> year;
	return (year - getyearOfBirth());
}
int HealthProfile::getMaximumHeartRate()
{
	return (220 - getAge()); // calculates maximum heart rate
}
string HealthProfile::getTargetHeartRate()
{
	float max;
	max = getMaximumHeartRate();
	string lowrate, highrate;
	lowrate = (max * .50);
	highrate = (max * .85);
	return (lowrate + "to" + highrate);
}
float HealthProfile::getBMI()
{
	return (weight * 703 / (height * height));
}