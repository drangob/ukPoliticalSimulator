#include <iostream>
#include <string>

#include "person.h"

using namespace std;

class Person {
	std::string preNominal, name, postNominal;
	bool isMale;
	double age;
	int maxAge;
public:
	Person(std::string name, double age, bool isMale, int maxAge){
		cout << "Object is being created " << endl;
		this->name.assign(name);
		this->isMale = isMale;
		if (isMale){
			preNominal = "Mr";
		} else {
			preNominal = "Miss";
		}
		this->maxAge = maxAge;
	}
	std::string getName(){
		return preNominal + " " + name + " " + postNominal;
	}
	int ageUp(){
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
	int die(){
		//die
		this->printAge();
		cout << "die!" << endl;
	}

	int printAge(){
		cout << "Age = " << this->age << endl;
	}	
};



int main(int argc, char const *argv[]) {
	/* code */
	Person user("Billy Bloggs", 10, true, 110);

	cout << user.getName() << endl;

	while(user.ageUp() == 0){	}
	return 0;
}