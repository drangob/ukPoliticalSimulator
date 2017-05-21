#include "Person.h"
#include "Player.h"

#include <string>
#include <iostream>

using namespace std;

//main method for game running
int main(int argc, char const *argv[]) {
	Person *me = new Person("Billy",2 , true, 100);
	cout << me->getAge();
}
