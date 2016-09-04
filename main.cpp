#include <iostd>
#include <cstring>

using namespace std;

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

	//var to hold user input
	int choice;

	while(run)
	{
		cout << "Enter the Pokemon ID (-1 to quit): ";
		if(cin >> choice)	//Valid input
		{
			for(int i=0;i<NUMPOKES;i++)
			{
				Poke poke = pokemon[i]
				if(choice == poke.poke_id)
					printPoke(&poke);
				else if(choice == -1)
					run = false;
				else
					cout << "Pokemon not found, please try again!" < endl;
			}
					
		}
	}
}
