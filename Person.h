// header file for the person.

/*this checks if the person has already been imported, we can have multiple imports and that fucks 
	everything up so yeah*/
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
	std::string preNominal, name, postNominal;
	bool isMale;
	double age;
	int maxAge;
public:
	Person(std::string name, double age, bool isMale, int maxAge);
	std::string getName();
	int ageUp();
	virtual void die();
	int getAge();
};

#endif
