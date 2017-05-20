#include "Person.h"
#include "Player.h"

#include <string>

using namespace std;

//main method for game running
int main(int argc, char const *argv[]) {
	Player *jimmy = new Player();
	Person *me = new Person("Billy", 2, true, 100);
	return 0;
}
