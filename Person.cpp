#include <iostream>
#include <string>

#include "Person.h"

using namespace std;


Person::Person(std::string name, double age, bool isMale, int maxAge){
	cout << "Object is being created " << endl;
	this->name.assign(name);
	this->isMale = isMale;
	if (isMale){
		preNominal = "Mr";
	} else {
		preNominal = "Miss";
	}
	this->age = age;
	this->maxAge = maxAge;
}
std::string Person::getName(){
	return preNominal + " " + name + " " + postNominal;
}
int Person::ageUp(){
	this->age += .25;
	srand(time(NULL));
	if(this->age > 60) {
		//chance is 1 in DEATHAGE - age
		//110 - 60 = 50, 1 in 50 chance
		int chance = (maxAge - this->age);
		if ((rand() % chance) <= 1) {
			//die
			this->die();
			return 1;
		}
	}
	return 0;
}

int Person::die(){
	//die

	cout << getName() << "Has died at the age of " << getAge() << endl;
}

int Person::getAge(){
	return age;
}

