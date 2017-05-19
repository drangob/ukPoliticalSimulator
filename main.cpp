
//Hi Dan!
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define STARTINGYEAR 1980
#define STARTINGAGE 10
#define DEATHAGE 110

double year = STARTINGYEAR;
int demPolling = 0;
double politicalpower = 0;

struct person {
	char name[50] = "";
	double age = STARTINGAGE;
	char role[50] = "";
};

int lCase(char *str) {
	//convert a string to lower case - useful for input sanitation
	for(int i = 0; str[i]; i++){
  		str[i] = tolower(str[i]);
	}
	return 0;
}

int getInput(char *store, char *prompt){
	//do prompt
	printf("%s ", prompt);
	//get input
	scanf("%s", store);
	//lcase the input
	lCase(store);
	return 0;
}

int doDeath () {
	//die
	return 0;
}

int ageUp(int *age){
	*age += .25;
	srand(time(NULL));
	if(*age > 60) {
		//chance is 1 in DEATHAGE - age
		//110 - 60 = 50, 1 in 50 chance
		int chance = (DEATHAGE - (int) *age);
		if ((rand() % chance) < 1) {
			//die
			doDeath();
		}
	}
	return 0;
}



int main(int argc, char const *argv[]){
	/*TODO:
	Actually make the game
	*/

	char input[100] = "";


	printf("You are a %d- year old hoping to make a career for yourself in the political sphere.\n", 
		STARTINGAGE);
	getInput(input,"Think you\'re up for it?");
	if(!strcmp(input,"yes")){
		printf("Good!\n");
	} else {
		printf("Well too bad, you\'re playing anyway.\n");
	}
	//setup user
	struct person user = malloc(sizeof(struct person));
	//get the users name
	getInput(input, "What's your first name?");
	strcpy(user->name,);
	
	return 0;
}
