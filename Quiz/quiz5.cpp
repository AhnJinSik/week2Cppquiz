/*#include <iostream>
using namespace std;
int main() {

	char board[3][3];
	int x, y, i, k;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	for (k = 0; k < 9; k++) {
		
		cout << "(x.y)��ǥ :";
		cin >> x;
		cin >> y;
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';
		for (i = 0; i < 3; i++) {

			cout<<"---��---��---" << endl;
			cout << board[i][0]<<"  l  "<<board[i][1] << "  l  "<<board[i][2]<<endl;
		}
		
		cout << "---��---��---" << endl;

	}
	return 0;
}*/