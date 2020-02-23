#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <string>
using namespace std;

void SetColor(int value) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

int main()
{
	int dicesides = 6;
	int dicenumber;
	int dicecolor;
	string userresponse;
	string userrepeat;

	srand((int)time(0));

	cout << "Do you wish to roll a die? Y or N?: ";
	cin >> userresponse;
	do
	{
		if (userresponse == "Y" || userresponse == "y")
		{
			dicenumber = (rand() % dicesides) + 1;
			dicecolor = (rand() % 15) + 1;

			if (dicenumber == 6)
			{
				system("cls");
				SetColor(dicecolor);
				cout << "You rolled a six" << endl;
				cout << "**************************\n";
				cout << "*                        *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*                        *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*                        *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "**************************\n";
			}
			else if (dicenumber == 5)
			{
				system("cls");
				SetColor(dicecolor);
				cout << "You rolled a five" << endl;
				cout << "**************************\n";
				cout << "*                        *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*                        *\n";
				cout << "*          ()()          *\n";
				cout << "*          ()()          *\n";
				cout << "*                        *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*  ()()             ()() *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "**************************\n";
			}
			else if (dicenumber == 4)
			{
				system("cls");
				SetColor(dicecolor);
				cout << "You rolled a four" << endl;
				cout << "**************************\n";
				cout << "*                        *\n";
				cout << "*  ()()            ()()  *\n";
				cout << "*  ()()            ()()  *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*  ()()            ()()  *\n";
				cout << "*  ()()            ()()  *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "**************************\n";
			}
			else if (dicenumber == 3)
			{
				system("cls");
				SetColor(dicecolor);
				cout << "You rolled a three" << endl;
				cout << "**************************\n";
				cout << "*                        *\n";
				cout << "*   ()()                 *\n";
				cout << "*   ()()                 *\n";
				cout << "*                        *\n";
				cout << "*          ()()          *\n";
				cout << "*          ()()          *\n";
				cout << "*                        *\n";
				cout << "*                  ()()  *\n";
				cout << "*                  ()()  *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "**************************\n";
			}
			else if (dicenumber == 2)
			{
				system("cls");
				SetColor(dicecolor);
				cout << "You rolled a two" << endl;
				cout << "**************************\n";
				cout << "*                        *\n";
				cout << "*   ()()                 *\n";
				cout << "*   ()()                 *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                 ()()   *\n";
				cout << "*                 ()()   *\n";
				cout << "*                        *\n";
				cout << "**************************\n";
			}
			else if (dicenumber == 1)
			{
				system("cls");
				SetColor(dicecolor);
				cout << "You rolled a one" << endl;
				cout << "**************************\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*          ()()          *\n";
				cout << "*          ()()          *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "*                        *\n";
				cout << "**************************\n";
			}

		}
		cout << "Do you wish to roll a dice again? Y or N: ";
		cin >> userrepeat;

	} while (userrepeat == "Y" || userrepeat == "y");

	system("pause");
	return 0;

}
