#include "Person.h"
#include "Player.h"

#include <string>
#include <iostream>

using namespace std;

//main method for game running, processing in World, display done here
int main(int argc, char const *argv[]) {
	Person *me = new Person("Billy",2 , true);
	cout << me->getAge();
}
