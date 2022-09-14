/*#include <iostream>
using namespace std;
int main() {
	int game[10][10] = { 0, };	
	int bomb = 1;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (rand() % 100 < 30)
				game[i][j] = bomb;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			if (game[i][j] == bomb)
				cout << "#";
			else
				cout << ".";
		cout << endl;
	}
}*/