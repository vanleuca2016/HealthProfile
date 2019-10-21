//this file is a header file. it sets up public and private
#include <string>
using namespace std;
class HealthProfile
{
public:
	HealthProfile(string fname, string lname, char g, int y, float h, float w);
	void setFirstName(string fname);
	string getFirstName();
	void setLastName(string lname);
	string getLastName();
	void setGender(char g);
	char getGender();
	void setyearOfBirth(int y);
	int getyearOfBirth();
	void setHeight(float h);
	float getHeight();
	void setWeight(float w);
	float getWeight();
	int getAge();
	int getMaximumHeartRate();
	string getTargetHeartRate();
	float getBMI();
private:
	string firstName;
	string lastName;
	char gender;
	int yearofBirth;
	float height;
	float weight;
};
