#include <iostream>
#include <conio.h>
using namespace std;

//Funtion Prototype

void ProcessLoop(void);
void PrnMainMenu(void);
void Atlanta(void);
void Boston(void);
void LosAngeles(void);
void Miami(void);
void NewYork(void);

//Program Setup

//heading
char PT1[] = " W Y N F I E L D   M E T R O  A I R P O R T ";

//variables
int choice;
char wait;


main()
{
	ProcessLoop();
	return 0;

}

void ProcessLoop(void)
{
	PrnMainMenu();
	while (choice != 6) {
		switch (choice) {
		case 1:
			Atlanta();
			break;
		case 2:
			Boston();
			break;
		case 3:
			LosAngeles();
			break;
		case 4:
			Miami();
			break;
		default:
			NewYork();
			break;
		}
		PrnMainMenu();
	}
	return;
}
//display main menu

void PrnMainMenu(void)
{
	system("cls");
	cout << "\n\t", PT1;
	cout << "\n\n\t                  M A I N   M E N U ";
	cout << "\n\n\n\t		Select one: ";
	cout << "\n\n\t				1.	Atlanta";
	cout << "\n\n\t				2.	Boston";
	cout << "\n\n\t				3.	Los Angeles";
	cout << "\n\n\t				4.	Miami";
	cout << "\n\n\t				5.	New York";
	cout << "\n\n\t				6.	Quit";
	cout << "\n\n\n\n\n\t		 Enter choice (1 - 6) ===> ";
	cin>>
}