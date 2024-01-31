#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
char easy[8][8];
char easyp2[8][8];
int easy1[8][8];
int easy2[8][8];
char easycom[8][8];
char medium[12][12];
char mediump2[12][12];
int medium1[12][12];
int medium2[12][12];
char mediumcom[12][12];
char hard[15][15];
char hardp2[15][15];
int hard1[15][15];
int hard2[15][15];
char hardcom[15][15];
void exit()
{
	system("cls");
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|   Thanks for Playing the Game   |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
}
int HighScore()
{
	// to record scores
	return 0;
}
bool winhard(char array[][15])
{
	int count = 0;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (array[i][j] == '*')
				count++;
		}
	}
	if (count == 144)
		return 1;
	else
		return 0;
}
bool winmedium(char array[][12])
{
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (array[i][j] == '*')
				count++;
		}
	}
	if (count == 144)
		return 1;
	else
		return 0;
}
bool wineasy(char array[][8])
{
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (array[i][j] == '*')
				count++;
		}
	}
	if (count == 64)
		return 1;
	else
		return 0;
}
int main();
void HardModeCom()
{
	int num = 1, row, column, count = 0, im, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1, tcolumn;
	char ch, alpha = 'a';
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hard[i][j] = '*';
		}
	}
	count = 0;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			num = 1;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	num1 = 1;
	count = 0;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	char com = 'a';
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			hardcom[i][j] = com;
		}
		com++;
	}
	for (int i = 4; i < 8; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			hardcom[i][j] = com;
		}
		com++;
	}
	for (int i = 8; i < 12; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			hardcom[i][j] = com;
		}
		com++;
	}
	for (int i = 12; i < 15; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			hardcom[i][j] = com;
		}
		com++;
	}
	for (int i = 9; i < 14; i++)
	{
		for (int j = 3; j < 5; j++)
		{
			hardcom[i][j] = com;
		}
		com++;
	}
	bool w = 0, p1 = 0, p2 = 0;
	int n = 2, box;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hard1[i][j] = n;
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hard2[i][j] = n;
			n++;
		}
	}
	system("cls");
	char c = 'a';
	bool osd = 0;
	int osdcount = 0, no1 = 1, no2 = 1;
	num = 1;
	while (w == 0)
	{
		cout << "                                                ";
		cout << "  Player - Mark your Target" << endl;
		cout << endl;
		cout << "                                    ";
		for (int i = 0; i < 15; i++)
		{
			cout << num << "      ";
			num++;
		}
		num = 1;
		cout << endl;
		for (int r = 0; r < 15; r++)
		{
			cout << "                                 ";
			cout << " ______" << "______" << "______" << "______" << "______";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                ";
			cout << num;
			num++;
			for (int c = 0; c < 15; c++)
			{
				cout << "|  " << hard1[r][c] << "  |";
			}
			cout << endl;
		}
		cout << "                                 ";
		cout << " ______" << "______" << "______" << "______" << "______";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                 ";
		cout << "Tell box number to attack at: ";
		cin >> box;
		while (hard1[0][box - 2] == 0 || hard1[0][box - 2] == 1)
		{
			cout << "                                 ";
			cout << "Can't Mark Again! Tell box number to attack at: ";
			cin >> box;
		}
		if (hard[0][box - 2] == '*')
		{
			hard1[0][box - 2] = 0;
			// water sound
		}
		else
		{
			//part destroyed sound
			hard1[0][box - 2] = 1;
			hard[0][box - 2] = '*';
		}
		c = 'a';
		for (int k = 0; k < 20; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (hard[i][j] == c)
						osd = 1;
				}
			}
			if (osd == 1)
				osdcount++;
			c++;
			osd = 0;
		}
		system("cls");
		if (osdcount == 10 - no1)
		{
			cout << "                                 ";
			cout << "  Player - One of your boats have sinked!" << endl << endl;
			// sink music
			no1++;
		}
		osdcount = 0;
		w = winhard(hard);
		if (w == 1)
		{
			p1 = 1;
		}
		if (w == 0)
		{

			cout << "                                                ";
			cout << "Computer - Mark your Target" << endl;
			cout << endl;
			cout << "                                    ";
			num = 1;
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				cout << " ______" << "______" << "______" << "______" << "______";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			cout << " ______" << "______" << "______" << "______" << "______";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			srand(time(0));
			box = (rand() % 64) + 2;
			while (hard2[0][box - 2] == 0 || hard2[0][box - 2] == 1)
			{
				srand(time(0));
				box = (rand() % 64) + 2;
			}
			if (hardcom[0][box - 2] == '*')
			{
				// water sound
				hard2[0][box - 2] = 0;
			}
			else
			{
				// part destroyed sound
				hard2[0][box - 2] = 1;
				hardcom[0][box - 2] = '*';
			}
			c = 'a';
			for (int k = 0; k < 20; k++)
			{
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						if (hardcom[i][j] == c)
							osd = 1;
					}
				}
				if (osd == 1)
					osdcount++;
				c++;
				osd = 0;
			}
			system("cls");
			if (osdcount == 10 - no2)
			{
				cout << "                                 ";
				cout << "One of Computer boats have sinked!" << endl << endl;
				// sink music
				no2++;
			}
			osdcount = 0;
			w = winhard(hardcom);
			if (w == 1)
			{
				p2 = 1;
			}
		}

	}
	system("cls");
	if (p1 == 1)
	{
		cout << "                                 ";
		cout << "   Player Won the Game";
	}
	else if (p2 == 1)
	{
		cout << "                                 ";
		cout << "  Computer Won the Game";
	}
	bool ex = 0;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
int main();
void HardModePvP()
{
	int num = 1, row, column, count = 0, im, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1, tcolumn;
	char ch, alpha = 'a';
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hard[i][j] = '*';
		}
	}
	count = 0;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			num = 1;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	num1 = 1;
	count = 0;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hard[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					hard[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 15)
			{
				if (hard[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					hard[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	num = 1, count = 0, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1;
	alpha = 'a';
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hardp2[i][j] = '*';
		}
	}
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hardp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					hardp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					hardp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hardp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hardp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					hardp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					hardp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hardp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hardp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					hardp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					hardp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hardp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hardp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					hardp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					hardp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hardp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 15; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 15; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 15; c++)
		{
			cout << "|  " << hardp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 15; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					hardp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (15 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 15)
			{
				if (hardp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					hardp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hardp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	bool w = 0, p1 = 0, p2 = 0;
	int n = 2, box;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hard1[i][j] = n;
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			hard2[i][j] = n;
			n++;
		}
	}
	system("cls");
	char c = 'a';
	bool osd = 0;
	int osdcount = 0, no1 = 1, no2 = 1;
	num = 1;
	while (w == 0)
	{
		cout << "                                                ";
		cout << "Player (1) - Mark your Target" << endl;
		cout << endl;
		cout << "                                    ";
		for (int i = 0; i < 15; i++)
		{
			cout << num << "      ";
			num++;
		}
		num = 1;
		cout << endl;
		for (int r = 0; r < 15; r++)
		{
			cout << "                                 ";
			cout << " ______" << " ______" << " ______" << " ______" << " ______";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                ";
			cout << num;
			num++;
			for (int c = 0; c < 15; c++)
			{
				cout << "|  " << hard1[r][c] << "  |";
			}
			cout << endl;
		}
		cout << "                                 ";
		cout << " ______" << " ______" << " ______" << " ______" << " ______";
		for (int s = 0; s < 15; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                 ";
		cout << "Tell box number to attack at: ";
		cin >> box;
		while (hard1[0][box - 2] == 0 || hard1[0][box - 2] == 1)
		{
			cout << "                                 ";
			cout << "Can't Mark Again! Tell box number to attack at: ";
			cin >> box;
		}
		if (hard[0][box - 2] == '*')
		{
			hard1[0][box - 2] = 0;
			// water sound
		}
		else
		{
			//part destroyed sound
			hard1[0][box - 2] = 1;
			hard[0][box - 2] = '*';
		}
		c = 'a';
		for (int k = 0; k < 20; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (hard[i][j] == c)
						osd = 1;
				}
			}
			if (osd == 1)
				osdcount++;
			c++;
			osd = 0;
		}
		if (osdcount == 10 - no1)
		{
			cout << "                                 ";
			cout << "Player (1) - One of your boats have sinked!" << endl << endl;
			// sink music
			no1++;
		}
		osdcount = 0;
		w = winhard(hard);
		if (w == 1)
		{
			p1 = 1;
		}
		if (w == 0)
		{
			cout << "                                                ";
			cout << "Player (2) - Mark your Target" << endl;
			cout << endl;
			cout << "                                    ";
			num = 1;
			for (int i = 0; i < 15; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 15; r++)
			{
				cout << "                                 ";
				cout << " ______" << " ______" << " ______" << " ______" << " ______";
				for (int s = 0; s < 15; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 15; c++)
				{
					cout << "|  " << hard2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			cout << " ______" << " ______" << " ______" << " ______" << " ______";
			for (int s = 0; s < 15; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                 ";
			cout << "Tell box number to attack at: ";
			cin >> box;
			while (hard2[0][box - 2] == 0 || hard2[0][box - 2] == 1)
			{
				cout << "                                 ";
				cout << "Can't Mark Again! Tell box number to attack at: ";
				cin >> box;
			}
			if (hardp2[0][box - 2] == '*')
			{
				// water sound
				hard2[0][box - 2] = 0;
			}
			else
			{
				// part destroyed sound
				hard2[0][box - 2] = 1;
				hardp2[0][box - 2] = '*';
			}
			c = 'a';
			for (int k = 0; k < 20; k++)
			{
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						if (hardp2[i][j] == c)
							osd = 1;
					}
				}
				if (osd == 1)
					osdcount++;
				c++;
				osd = 0;
			}
			if (osdcount == 10 - no2)
			{
				cout << "                                 ";
				cout << "Player (2) - One of your boats have sinked!" << endl << endl;
				// sink music
				no2++;
			}
			osdcount = 0;
			w = winhard(hardp2);
			if (w == 1)
			{
				p2 = 1;
			}
		}

	}
	system("cls");
	if (p1 == 1)
	{
		cout << "                                 ";
		cout << "Player one Won the Game";
	}
	else if (p2 == 1)
	{
		cout << "                                 ";
		cout << "Player Two Won the Game";
	}
	bool ex = 0;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
int main();
void MediumModeCom()
{
	int num = 1, row, column, count = 0, im, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1, tcolumn;
	char ch, alpha = 'a';
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			medium[i][j] = '*';
		}
	}
	count = 0;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			num = 1;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	num1 = 1;
	count = 0;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	char com = 'a';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			mediumcom[i][j] = com;
		}
		com++;
	}
	for (int i = 3; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mediumcom[i][j] = com;
		}
		com++;
	}
	for (int i = 6; i < 9; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mediumcom[i][j] = com;
		}
		com++;
	}
	for (int i = 9; i < 12; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mediumcom[i][j] = com;
		}
		com++;
	}
	for (int i = 9; i < 12; i++)
	{
		for (int j = 3; j < 5; j++)
		{
			mediumcom[i][j] = com;
		}
		com++;
	}
	bool w = 0, p1 = 0, p2 = 0;
	int n = 2, box;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			medium1[i][j] = n;
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			medium2[i][j] = n;
			n++;
		}
	}
	system("cls");
	char c = 'a';
	bool osd = 0;
	int osdcount = 0, no1 = 1, no2 = 1;
	num = 1;
	while (w == 0)
	{
		cout << "                                                ";
		cout << "  Player - Mark your Target" << endl;
		cout << endl;
		cout << "                                    ";
		for (int i = 0; i < 12; i++)
		{
			cout << num << "      ";
			num++;
		}
		num = 1;
		cout << endl;
		for (int r = 0; r < 12; r++)
		{
			cout << "                                 ";
			cout << " ______" << "______" << "______";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                ";
			cout << num;
			num++;
			for (int c = 0; c < 12; c++)
			{
				cout << "|  " << medium1[r][c] << "  |";
			}
			cout << endl;
		}
		cout << "                                 ";
		cout << " ______" << "______" << "______";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                 ";
		cout << "Tell box number to attack at: ";
		cin >> box;
		while (medium1[0][box - 2] == 0 || medium1[0][box - 2] == 1)
		{
			cout << "                                 ";
			cout << "Can't Mark Again! Tell box number to attack at: ";
			cin >> box;
		}
		if (medium[0][box - 2] == '*')
		{
			medium1[0][box - 2] = 0;
			// water sound
		}
		else
		{
			//part destroyed sound
			medium1[0][box - 2] = 1;
			medium[0][box - 2] = '*';
		}
		c = 'a';
		for (int k = 0; k < 20; k++)
		{
			for (int i = 0; i < 12; i++)
			{
				for (int j = 0; j < 12; j++)
				{
					if (medium[i][j] == c)
						osd = 1;
				}
			}
			if (osd == 1)
				osdcount++;
			c++;
			osd = 0;
		}
		system("cls");
		if (osdcount == 10 - no1)
		{
			cout << "                                 ";
			cout << "  Player - One of your boats have sinked!" << endl << endl;
			// sink music
			no1++;
		}
		osdcount = 0;
		w = winmedium(medium);
		if (w == 1)
		{
			p1 = 1;
		}
		if (w == 0)
		{

			cout << "                                                ";
			cout << "Computer - Mark your Target" << endl;
			cout << endl;
			cout << "                                    ";
			num = 1;
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				cout << " ______" << "______" << "______";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			cout << " ______" << "______" << "______";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			srand(time(0));
			box = (rand() % 64) + 2;
			while (medium2[0][box - 2] == 0 || medium2[0][box - 2] == 1)
			{
				srand(time(0));
				box = (rand() % 64) + 2;
			}
			if (mediumcom[0][box - 2] == '*')
			{
				// water sound
				medium2[0][box - 2] = 0;
			}
			else
			{
				// part destroyed sound
				medium2[0][box - 2] = 1;
				mediumcom[0][box - 2] = '*';
			}
			c = 'a';
			for (int k = 0; k < 20; k++)
			{
				for (int i = 0; i < 12; i++)
				{
					for (int j = 0; j < 12; j++)
					{
						if (mediumcom[i][j] == c)
							osd = 1;
					}
				}
				if (osd == 1)
					osdcount++;
				c++;
				osd = 0;
			}
			system("cls");
			if (osdcount == 10 - no2)
			{
				cout << "                                 ";
				cout << "One of Computer boats have sinked!" << endl << endl;
				// sink music
				no2++;
			}
			osdcount = 0;
			w = winmedium(mediumcom);
			if (w == 1)
			{
				p2 = 1;
			}
		}

	}
	system("cls");
	if (p1 == 1)
	{
		cout << "                                 ";
		cout << "   Player Won the Game";
	}
	else if (p2 == 1)
	{
		cout << "                                 ";
		cout << "  Computer Won the Game";
	}
	bool ex = 0;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
int main();
void MediumModePvP()
{
	int num = 1, row, column, count = 0, im, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1, tcolumn;
	char ch, alpha = 'a';
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			medium[i][j] = '*';
		}
	}
	count = 0;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			num = 1;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	num1 = 1;
	count = 0;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << medium[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					medium[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 12)
			{
				if (medium[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					medium[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	num = 1, count = 0, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1;
	alpha = 'a';
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			mediump2[i][j] = '*';
		}
	}
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << mediump2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					mediump2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					mediump2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << mediump2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << mediump2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					mediump2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					mediump2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << mediump2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << mediump2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					mediump2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					mediump2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << mediump2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << mediump2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					mediump2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					mediump2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << mediump2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 12; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 12; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 12; c++)
		{
			cout << "|  " << mediump2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 12; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					mediump2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (12 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 12)
			{
				if (mediump2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					mediump2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << mediump2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	bool w = 0, p1 = 0, p2 = 0;
	int n = 2, box;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			medium1[i][j] = n;
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			medium2[i][j] = n;
			n++;
		}
	}
	system("cls");
	char c = 'a';
	bool osd = 0;
	int osdcount = 0, no1 = 1, no2 = 1;
	num = 1;
	while (w == 0)
	{
		cout << "                                                ";
		cout << "Player (1) - Mark your Target" << endl;
		cout << endl;
		cout << "                                    ";
		for (int i = 0; i < 12; i++)
		{
			cout << num << "      ";
			num++;
		}
		num = 1;
		cout << endl;
		for (int r = 0; r < 12; r++)
		{
			cout << "                                 ";
			cout << " ______" << " ______" << " ______";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                ";
			cout << num;
			num++;
			for (int c = 0; c < 12; c++)
			{
				cout << "|  " << medium1[r][c] << "  |";
			}
			cout << endl;
		}
		cout << "                                 ";
		cout << " ______" << " ______" << " ______";
		for (int s = 0; s < 12; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                 ";
		cout << "Tell box number to attack at: ";
		cin >> box;
		while (medium1[0][box - 2] == 0 || medium1[0][box - 2] == 1)
		{
			cout << "                                 ";
			cout << "Can't Mark Again! Tell box number to attack at: ";
			cin >> box;
		}
		if (medium[0][box - 2] == '*')
		{
			medium1[0][box - 2] = 0;
			// water sound
		}
		else
		{
			//part destroyed sound
			medium1[0][box - 2] = 1;
			medium[0][box - 2] = '*';
		}
		c = 'a';
		for (int k = 0; k < 20; k++)
		{
			for (int i = 0; i < 12; i++)
			{
				for (int j = 0; j < 12; j++)
				{
					if (medium[i][j] == c)
						osd = 1;
				}
			}
			if (osd == 1)
				osdcount++;
			c++;
			osd = 0;
		}
		if (osdcount == 10 - no1)
		{
			cout << "                                 ";
			cout << "Player (1) - One of your boats have sinked!" << endl << endl;
			// sink music
			no1++;
		}
		osdcount = 0;
		w = winmedium(medium);
		if (w == 1)
		{
			p1 = 1;
		}
		if (w == 0)
		{
			cout << "                                                ";
			cout << "Player (2) - Mark your Target" << endl;
			cout << endl;
			cout << "                                    ";
			num = 1;
			for (int i = 0; i < 12; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 12; r++)
			{
				cout << "                                 ";
				cout << " ______" << " ______" << " ______";
				for (int s = 0; s < 12; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 12; c++)
				{
					cout << "|  " << medium2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			cout << " ______" << " ______" << " ______";
			for (int s = 0; s < 12; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                 ";
			cout << "Tell box number to attack at: ";
			cin >> box;
			while (medium2[0][box - 2] == 0 || medium2[0][box - 2] == 1)
			{
				cout << "                                 ";
				cout << "Can't Mark Again! Tell box number to attack at: ";
				cin >> box;
			}
			if (mediump2[0][box - 2] == '*')
			{
				// water sound
				medium2[0][box - 2] = 0;
			}
			else
			{
				// part destroyed sound
				medium2[0][box - 2] = 1;
				mediump2[0][box - 2] = '*';
			}
			c = 'a';
			for (int k = 0; k < 20; k++)
			{
				for (int i = 0; i < 12; i++)
				{
					for (int j = 0; j < 12; j++)
					{
						if (mediump2[i][j] == c)
							osd = 1;
					}
				}
				if (osd == 1)
					osdcount++;
				c++;
				osd = 0;
			}
			if (osdcount == 10 - no2)
			{
				cout << "                                 ";
				cout << "Player (2) - One of your boats have sinked!" << endl << endl;
				// sink music
				no2++;
			}
			osdcount = 0;
			w = winmedium(mediump2);
			if (w == 1)
			{
				p2 = 1;
			}
		}

	}
	system("cls");
	if (p1 == 1)
	{
		cout << "                                 ";
		cout << "Player one Won the Game";
	}
	else if (p2 == 1)
	{
		cout << "                                 ";
		cout << "Player Two Won the Game";
	}
	bool ex = 0;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
int main();
void EasyModeCom()
{
	int num = 1, row, column, count = 0, im, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1, tcolumn;
	char ch, alpha = 'a';
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easy[i][j] = '*';
		}
	}
	count = 0;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			num = 1;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	num1 = 1;
	count = 0;
	cout << "                                                ";
	cout << "  Player - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "  Player - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	char com = 'a';
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easycom[i][j] = com;
		}
		com++;
	}
	for (int i = 2; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			easycom[i][j] = com;
		}
		com++;
	}
	for (int i = 4; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			easycom[i][j] = com;
		}
		com++;
	}
	for (int i = 6; i < 8; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			easycom[i][j] = com;
		}
		com++;
	}
	for (int i = 6; i < 8; i++)
	{
		for (int j = 3; j < 5; j++)
		{
			easycom[i][j] = com;
		}
		com++;
	}
	bool w = 0, p1 = 0, p2 = 0;
	int n = 2, box;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easy1[i][j] = n;
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easy2[i][j] = n;
			n++;
		}
	}
	system("cls");
	char c = 'a';
	bool osd = 0;
	int osdcount = 0, no1 = 1, no2 = 1;
	num = 1;
	while (w == 0)
	{
		cout << "                                                ";
		cout << "  Player - Mark your Target" << endl;
		cout << endl;
		cout << "                                    ";
		for (int i = 0; i < 8; i++)
		{
			cout << num << "      ";
			num++;
		}
		num = 1;
		cout << endl;
		for (int r = 0; r < 8; r++)
		{
			cout << "                                 ";
			cout << " ______";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                ";
			cout << num;
			num++;
			for (int c = 0; c < 8; c++)
			{
				cout << "|  " << easy1[r][c] << "  |";
			}
			cout << endl;
		}
		cout << "                                 ";
		cout << " ______";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                 ";
		cout << "Tell box number to attack at: ";
		cin >> box;
		while (easy1[0][box - 2] == 0 || easy1[0][box - 2] == 1)
		{
			cout << "                                 ";
			cout << "Can't Mark Again! Tell box number to attack at: ";
			cin >> box;
		}
		if (easy[0][box - 2] == '*')
		{
			easy1[0][box - 2] = 0;
			// water sound
		}
		else
		{
			//part destroyed sound
			easy1[0][box - 2] = 1;
			easy[0][box - 2] = '*';
		}
		c = 'a';
		for (int k = 0; k < 20; k++)
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (easy[i][j] == c)
						osd = 1;
				}
			}
			if (osd == 1)
				osdcount++;
			c++;
			osd = 0;
		}
		system("cls");
		if (osdcount == 10 - no1)
		{
			cout << "                                 ";
			cout << "  Player - One of your boats have sinked!" << endl << endl;
			// sink music
			no1++;
		}
		osdcount = 0;
		w = wineasy(easy);
		if (w == 1)
		{
			p1 = 1;
		}
		if (w == 0)
		{

			cout << "                                                ";
			cout << "Computer - Mark your Target" << endl;
			cout << endl;
			cout << "                                    ";
			num = 1;
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				cout << " ______";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			cout << " ______";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			srand(time(0));
			box = (rand() % 64) + 2;
			while (easy2[0][box - 2] == 0 || easy2[0][box - 2] == 1)
			{
				srand(time(0));
				box = (rand() % 64) + 2;
			}
			if (easycom[0][box - 2] == '*')
			{
				// water sound
				easy2[0][box - 2] = 0;
			}
			else
			{
				// part destroyed sound
				easy2[0][box - 2] = 1;
				easycom[0][box - 2] = '*';
			}
			c = 'a';
			for (int k = 0; k < 20; k++)
			{
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (easycom[i][j] == c)
							osd = 1;
					}
				}
				if (osd == 1)
					osdcount++;
				c++;
				osd = 0;
			}
			system("cls");
			if (osdcount == 10 - no2)
			{
				cout << "                                 ";
				cout << "One of Computer boats have sinked!" << endl << endl;
				// sink music
				no2++;
			}
			osdcount = 0;
			w = wineasy(easycom);
			if (w == 1)
			{
				p2 = 1;
			}
		}

	}
	system("cls");
	if (p1 == 1)
	{
		cout << "                                 ";
		cout << "   Player Won the Game";
	}
	else if (p2 == 1)
	{
		cout << "                                 ";
		cout << "  Computer Won the Game";
	}
	bool ex = 0;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
int main();
void EasyModePvP()
{
	int num = 1, row, column, count = 0, im, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1, tcolumn;
	char ch, alpha = 'a';
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easy[i][j] = '*';
		}
	}
	count = 0;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			num = 1;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	count = 0;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	num = 1;
	num1 = 1;
	count = 0;
	cout << "                                                ";
	cout << "Player (1) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easy[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					easy[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 8)
			{
				if (easy[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					easy[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (1) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	num = 1, count = 0, cruiser = 1, num1 = 1, carrier = 1, battleship = 1, submarine = 1, destroyer = 1;
	alpha = 'a';
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easyp2[i][j] = '*';
		}
	}
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easyp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	num1 = 1;
	cout << "                                ";
	cout << "Carrier No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (carrier <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 8 && column <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					easyp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 7)
			{
				cout << "                                ";
				cout << "You can't place a carrier here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 8 && row <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 8)
			{
				for (; im < tcolumn + 8; im++)
				{
					easyp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				carrier++;
			}
		}
		if (carrier <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easyp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 8)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Carrier No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easyp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Battleship No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (battleship <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 5 && column <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					easyp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 4)
			{
				cout << "                                ";
				cout << "You can't place a battleship here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 5 && row <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 5)
			{
				for (; im < tcolumn + 5; im++)
				{
					easyp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				battleship++;
			}
		}
		if (battleship <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easyp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 5)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Battleship No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easyp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Cruiser No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (cruiser <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 4 && column <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					easyp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 3)
			{
				cout << "                                ";
				cout << "You can't place a cruiser here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 4 && row <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 4)
			{
				for (; im < tcolumn + 4; im++)
				{
					easyp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				cruiser++;
			}
		}
		if (cruiser <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easyp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 4)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Cruiser No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easyp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Submarine No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (submarine <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 2)
			{
				cout << "                                ";
				cout << "You can't place a Submarine here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 3 && column <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					easyp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 2)
			{
				cout << "                                ";
				cout << "You can't place a submarine here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 3 && row <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 3)
			{
				for (; im < tcolumn + 3; im++)
				{
					easyp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				submarine++;
			}
		}
		if (submarine <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easyp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 3)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Submarine No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	system("cls");
	count = 0;
	num = 1;
	num1 = 1;
	cout << "                                                ";
	cout << "Player (2) - Set your ships" << endl;
	cout << endl;
	cout << "                                    ";
	for (int i = 0; i < 8; i++)
	{
		cout << num << "      ";
		num++;
	}
	num = 1;
	cout << endl;
	for (int r = 0; r < 8; r++)
	{
		cout << "                                 ";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                ";
		cout << num;
		num++;
		for (int c = 0; c < 8; c++)
		{
			cout << "|  " << easyp2[r][c] << "  |";
		}
		cout << endl;
	}
	cout << "                                 ";
	for (int s = 0; s < 8; s++)
	{
		cout << " ______";
	}
	cout << endl << endl;
	cout << "                                ";
	cout << "Destroyer No. " << num1 << endl;
	cout << "                                ";
	cout << "Press (H) - Horizontally" << endl;
	cout << "                                ";
	cout << "Press (V) - Vertically" << endl;
	ch = _getch();
	while (destroyer <= 2)
	{
		if (ch == 'h' || ch == 'H')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - column < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Column Again: ";
				cin >> column;
			}
			im = column;
			tcolumn = column;
			while (column < tcolumn + 2 && column <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				column++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					easyp2[row - 1][im - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}

		}
		else if (ch == 'v' || ch == 'V')
		{
			cout << "                                ";
			cout << "Enter row: ";
			cin >> row;
			cout << "                                ";
			cout << "Enter Column: ";
			cin >> column;
			while (8 - row < 1)
			{
				cout << "                                ";
				cout << "You can't place a destroyer here! Enter Row Again: ";
				cin >> row;
			}
			im = row;
			tcolumn = row;
			while (row < tcolumn + 2 && row <= 8)
			{
				if (easyp2[row - 1][column - 1] == '*')
				{
					count++;
				}
				row++;
			}
			if (count == 2)
			{
				for (; im < tcolumn + 2; im++)
				{
					easyp2[im - 1][column - 1] = alpha;
				}
				alpha++;
				num1++;
				destroyer++;
			}
		}
		if (destroyer <= 2)
		{
			system("cls");
			num = 1;
			cout << "                                                ";
			cout << "Player (2) - Set your ships" << endl;
			cout << endl;
			cout << "                                    ";
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			cout << endl;
			num = 1;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easyp2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			if (count != 2)
			{
				cout << "                                ";
				cout << "There is already a ship placed here";
				cout << endl;
			}
			count = 0;
			cout << "                                ";
			cout << "Destroyer No. " << num1 << endl;
			cout << "                                ";
			cout << "Press (H) - Horizontally" << endl;
			cout << "                                ";
			cout << "Press (V) - Vertically" << endl;
			ch = _getch();
		}
	}
	bool w = 0, p1 = 0, p2 = 0;
	int n = 2, box;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easy1[i][j] = n;
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			easy2[i][j] = n;
			n++;
		}
	}
	system("cls");
	char c = 'a';
	bool osd = 0;
	int osdcount = 0, no1 = 1, no2 = 1;
	num = 1;
	while (w == 0)
	{
		cout << "                                                ";
		cout << "Player (1) - Mark your Target" << endl;
		cout << endl;
		cout << "                                    ";
		for (int i = 0; i < 8; i++)
		{
			cout << num << "      ";
			num++;
		}
		num = 1;
		cout << endl;
		for (int r = 0; r < 8; r++)
		{
			cout << "                                 ";
			cout << " ______";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                ";
			cout << num;
			num++;
			for (int c = 0; c < 8; c++)
			{
				cout << "|  " << easy1[r][c] << "  |";
			}
			cout << endl;
		}
		cout << "                                 ";
		cout << " ______";
		for (int s = 0; s < 8; s++)
		{
			cout << " ______";
		}
		cout << endl << endl;
		cout << "                                 ";
		cout << "Tell box number to attack at: ";
		cin >> box;
		while (easy1[0][box - 2] == 0 || easy1[0][box - 2] == 1)
		{
			cout << "                                 ";
			cout << "Can't Mark Again! Tell box number to attack at: ";
			cin >> box;
		}
		if (easy[0][box - 2] == '*')
		{
			easy1[0][box - 2] = 0;
			// water sound
		}
		else
		{
			//part destroyed sound
			easy1[0][box - 2] = 1;
			easy[0][box - 2] = '*';
		}
		c = 'a';
		for (int k = 0; k < 20; k++)
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (easy[i][j] == c)
						osd = 1;
				}
			}
			if (osd == 1)
				osdcount++;
			c++;
			osd = 0;
		}
		if (osdcount == 10 - no1)
		{
			cout << "                                 ";
			cout << "Player (1) - One of your boats have sinked!" << endl << endl;
			// sink music
			no1++;
		}
		osdcount = 0;
		w = wineasy(easy);
		if (w == 1)
		{
			p1 = 1;
		}
		if (w == 0)
		{
			cout << "                                                ";
			cout << "Player (2) - Mark your Target" << endl;
			cout << endl;
			cout << "                                    ";
			num = 1;
			for (int i = 0; i < 8; i++)
			{
				cout << num << "      ";
				num++;
			}
			num = 1;
			cout << endl;
			for (int r = 0; r < 8; r++)
			{
				cout << "                                 ";
				cout << " ______";
				for (int s = 0; s < 8; s++)
				{
					cout << " ______";
				}
				cout << endl << endl;
				cout << "                                ";
				cout << num;
				num++;
				for (int c = 0; c < 8; c++)
				{
					cout << "|  " << easy2[r][c] << "  |";
				}
				cout << endl;
			}
			cout << "                                 ";
			cout << " ______";
			for (int s = 0; s < 8; s++)
			{
				cout << " ______";
			}
			cout << endl << endl;
			cout << "                                 ";
			cout << "Tell box number to attack at: ";
			cin >> box;
			while (easy2[0][box - 2] == 0 || easy2[0][box - 2] == 1)
			{
				cout << "                                 ";
				cout << "Can't Mark Again! Tell box number to attack at: ";
				cin >> box;
			}
			if (easyp2[0][box - 2] == '*')
			{
				// water sound
				easy2[0][box - 2] = 0;
			}
			else
			{
				// part destroyed sound
				easy2[0][box - 2] = 1;
				easyp2[0][box - 2] = '*';
			}
			c = 'a';
			for (int k = 0; k < 20; k++)
			{
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (easyp2[i][j] == c)
							osd = 1;
					}
				}
				if (osd == 1)
					osdcount++;
				c++;
				osd = 0;
			}
			if (osdcount == 10 - no2)
			{
				cout << "                                 ";
				cout << "Player (2) - One of your boats have sinked!" << endl << endl;
				// sink music
				no2++;
			}
			osdcount = 0;
			w = wineasy(easyp2);
			if (w == 1)
			{
				p2 = 1;
			}
		}

	}
	system("cls");
	if (p1 == 1)
	{
		cout << "                                 ";
		cout << "Player one Won the Game";
	}
	else if (p2 == 1)
	{
		cout << "                                 ";
		cout << "Player Two Won the Game";
	}
	bool ex = 0;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}

}
void Instructions()
{
	cout << "\t\t\t\t\t           Battleship Game        " << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|   Place your ships in the grid  |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|    Attack Ships below water     |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|      Right Target Marks (1)     |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|      Wrong Target Marks (0)     |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|     Destroy all ships to Win    |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|      Easy Mode has 10 Ships     |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|     Medium Mode has 15 Ships    |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|      Hard Mode has 20 Ships     |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << endl << endl << endl;
	bool ex = 0;
	char ch;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
void Credits()
{
	cout << "\t\t\t\t\t       A Battleship Game by       " << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|       (GiGa X-Division 9)       |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|      Ali Rubass (21F-9262)      |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t|      M. Kashan  (21F-9062)      |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << endl << endl << endl;
	bool ex = 0;
	char ch;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	ch = _getch();
	while (ex == 0)
	{
		if (ch == 'm' || ch == 'M')
		{
			main();
			ex = 1;
		}
		else if (ch == 'e' || ch == 'E')
		{
			exit();
			ex = 1;
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (M) - Main Menu           |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) - Exit                |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
		}
	}
}
void play()
{
	char ch = 'a';
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (P) - Player Vs. Player   |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (C) - Player Vs. COM      |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	while (ch != 'r')
	{
		ch = _getch();
		if (ch == 'p' || ch == 'P')
		{
			system("cls");
			cout << "\t\t\t\t\t                 MODE             " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t|         Press (E) - Easy        |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t|         Press (M) - Medium      |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t|         Press (H) - Hard        |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			ch = _getch();
			while (1)
			{
				if (ch == 'e' || ch == 'E')
				{
					system("cls");
					EasyModePvP();
				}
				else if (ch == 'm' || ch == 'M')
				{
					system("cls");
					MediumModePvP();
				}
				else if (ch == 'h' || ch == 'H')
				{
					system("cls");
					HardModePvP();
				}
				else
				{
					system("cls");
					cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
					cout << "\t\t\t\t\t                 MODE             " << endl;
					cout << "\t\t\t\t\t ---------------------------------" << endl;
					cout << "\t\t\t\t\t|         Press (E) - Easy        |" << endl;
					cout << "\t\t\t\t\t ---------------------------------" << endl;
					cout << "\t\t\t\t\t|         Press (M) - Medium      |" << endl;
					cout << "\t\t\t\t\t ---------------------------------" << endl;
					cout << "\t\t\t\t\t|         Press (H) - Hard        |" << endl;
					cout << "\t\t\t\t\t ---------------------------------" << endl;
					ch = _getch();
				}
			}
		}
		else if (ch == 'c' || ch == 'C')
		{
				system("cls");
				cout << "\t\t\t\t\t                 MODE             " << endl;
				cout << "\t\t\t\t\t ---------------------------------" << endl;
				cout << "\t\t\t\t\t|         Press (E) - Easy        |" << endl;
				cout << "\t\t\t\t\t ---------------------------------" << endl;
				cout << "\t\t\t\t\t|         Press (M) - Medium      |" << endl;
				cout << "\t\t\t\t\t ---------------------------------" << endl;
				cout << "\t\t\t\t\t|         Press (H) - Hard        |" << endl;
				cout << "\t\t\t\t\t ---------------------------------" << endl;
				ch = _getch();
				while (1)
				{
					if (ch == 'e' || ch == 'E')
					{
						system("cls");
						EasyModeCom();
					}
					else if (ch == 'm' || ch == 'M')
					{
						system("cls");
						MediumModeCom();
					}
					else if (ch == 'h' || ch == 'H')
					{
						system("cls");
						HardModeCom();
					}
					else
					{
						system("cls");
						cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
						cout << "\t\t\t\t\t                 MODE             " << endl;
						cout << "\t\t\t\t\t ---------------------------------" << endl;
						cout << "\t\t\t\t\t|         Press (E) - Easy        |" << endl;
						cout << "\t\t\t\t\t ---------------------------------" << endl;
						cout << "\t\t\t\t\t|         Press (M) - Medium      |" << endl;
						cout << "\t\t\t\t\t ---------------------------------" << endl;
						cout << "\t\t\t\t\t|         Press (H) - Hard        |" << endl;
						cout << "\t\t\t\t\t ---------------------------------" << endl;
						ch = _getch();
					}
				}
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (P) - Player Vs. Player   |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (C) - Player Vs. COM      |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
		}
	}

}
int main()
{
	system("cls");
	char ch = 'i';
	bool game = 1;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (P) To Play the Game      |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (R) To Read Instructions  |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (H) To Check High Scores  |" << endl;
	cout << "\t\t\t\t\t --------------------------------- " << endl;
	cout << "\t\t\t\t\t| Press (C) To Check Credits      |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	cout << "\t\t\t\t\t| Press (E) To Exit               |" << endl;
	cout << "\t\t\t\t\t ---------------------------------" << endl;
	while (game==1)
	{
		ch = _getch();
		if (ch == 'p' || ch == 'P')
		{
			system("cls");
			play();
		}
		else if (ch == 'r' || ch == 'R')
		{
			system("cls");
			Instructions();
		}
		else if (ch == 'h' || ch == 'H')
		{
			system("cls");
			HighScore();
		}
		else if (ch == 'c' || ch == 'C')
		{

			system("cls");
			Credits();
		}
		else if (ch == 'e' || ch == 'E')
		{
			system("cls");
			exit();
		}
		else
		{
			system("cls");
			cout << "\t\t\t\t\t     Wrong Input! Input Again    " << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (P) To Play the Game      |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (R) To Read Instructions  |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (H) To Check High Scores  |" << endl;
			cout << "\t\t\t\t\t --------------------------------- " << endl;
			cout << "\t\t\t\t\t| Press (C) To Check Credits      |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
			cout << "\t\t\t\t\t| Press (E) To Exit               |" << endl;
			cout << "\t\t\t\t\t ---------------------------------" << endl;
		}
	}
}