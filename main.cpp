#include <iostream>
#include <string>
using namespace std;

void randomNumber()
{
	char matchingLetters[26] = { 'a', 'b' , 'c' , 'd', 'e' , 'f' , 'g', 'h' , 'i', 'j' , 'k', 'l' , 'm' , 'n' ,'o' , 'p',
	'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' }; // array storing matching numbers
	




}
int main()
{
	unsigned int one; // variable created to take in user input when asked to press 1 to start the game
	cout << "*****************" << "Welcome to the 6x6 matching game!" << "*******************" << endl;
	while (true) {
		cout << "Press 1 to start the game: ";
		cin >> one;
		if (one == 1)
		{
			char board[20][20] = {	{'*' , '*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' , '*' , '*' , '*' , '*'},
									{'*','  ','  ' ,'  ' ,'  ' ,'  ','  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' , '*'},
									{'*','   ' ,'   ' , '   ',  '1' , '  ',  '2' , '  ' , '3' , '   ', '4' , '  ', '5' , '  ' , '6','  ' , '  ','  ' , '*'},
									{'*',  '    ', '1', '|' ,  '-' , '|', '-', '|','-', '|' , '-' , '|' ,  '-' ,'|'  , '-' , '|' , '  ' ,'  ' ,'*'},
									{'*','   ', '2', '|' ,  '-' , '|', '-', '|','-', '|' , '-' , '|' ,  '-' ,'|'  , '-' , '|'   , '  ' ,'  ', '*'},
									{'*','   ', '3', '|' ,  '-' , '|', '-', '|','-', '|' , '-' , '|' ,  '-' ,'|'  , '-' , '|'   , '  ','  ' , '*'},
									{'*','   ', '4', '|' ,  '-' , '|', '-', '|','-', '|' , '-' , '|' ,  '-' ,'|'  , '-' , '|'   ,'  ', '  '  , '*'},
									{'*','   ', '5', '|' ,  '-' , '|', '-', '|','-', '|' , '-' , '|' ,  '-' ,'|'  , '-' , '|'   ,'  ' ,'  ' , '*'},
									{'*','  ','  ' ,'  ' ,'  ' ,'  ','  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' , '*'},
									{'*','  ','  ' ,'  ' ,'  ' ,'  ','  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' , '*'},
									{'*' , '*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' ,'*' , '*' , '*' , '*', '*'},
							   };
			for (char i = 0; i < 20 ; i++)
			{
				for (char j = 0; j < 20; j++)
				{
					cout << board[i][j] << "    ";
				}
				cout << endl;
			}
		

		}
		else
		{
			cout << "Please press 1 to start the game. Try again" << endl;
			continue;

		}
		


		}
	





}
	




