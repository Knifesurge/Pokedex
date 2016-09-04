#include <iostd>
#include <cstring>

using namespace std;

#define NUMPOKES 151

//Flag for while-loop
bool run = true;

typedef struct
{
	char	name[15];
	char	type[15];
	int poke_id;
}Poke;

void printPoke(*Poke p);

int main()
{
	//Create all Pokemon
	Poke bulbasaur;

	//Fill all structs
	strcpy(bulbasaur.name, "Bulbasaur");
	strcpy(bulbasaur.type, "Grass");
	bulbasaur.poke_id = 1;

	//Array that hold every Pokemon (for list search)
	Poke Pokemon[] = {};

	//var to hold user input
	int choice;

	while(run)
	{
		cout << "Enter the Pokemon ID (-1 to quit): ";
		if(cin >> choice)	//Valid input
		{
			for(int i=0;i<NUMPOKES;i++)
			{
				Poke poke = pokemon[i];	//Pokemon that is the current Pokemon that the for loop is running over
				if(choice == poke.poke_id)	//If the ID entered is a valid ID
					printPoke(&poke);	//Print the Pokemon
				else if(choice == -1)	//Kill signal
					run = false;
				else	//ID entered is not valid
					cout << "Pokemon not found, please try again!" < endl;
			}
					
		}
	}
}
