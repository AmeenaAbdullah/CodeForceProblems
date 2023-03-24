#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, k, rq, cq;
	cin >> n >> k;
	cin >> rq >> cq;
	vector <pair<int, int>> v;

	

	int** board = new int*[n];
	for (int i = 1; i <= n; i++) {

		board[i] = new int[n];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			board[i][j] = 0;
		}
	}

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
		board[x][y] = 1;

	}

	board[rq][cq] = 7;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			cout << board[i][j] << " ";
		}
		cout << endl;
	}

	int x = rq, y = cq, squares = 0;

	//upward
	while (y+1 <= n && board[x][y+1] != 1) {
		squares++;
		y++;
	}

	x = rq, y = cq;
	while (y-1>=1 && board[x][y-1] != 1) {
		squares++; y--;
	}

	x = rq, y = cq;
	while (x+1<= n && board[x+1][y] != 1) {
		squares++; x++;
		
	}
	x = rq, y = cq;
	while (x-1>=1 && board[x-1][y] != 1) {
		squares++; x--;
	}

	x = rq, y = cq;
	while (x+1<= n && y+1<=n && board[x+1][y+1] != 1) {
		squares++; y++, x++;
	}
	x = rq, y = cq;
	while ( x-1 >= 1 && y-1 >=1 && board[x-1][y-1] != 1) {
		squares++; y--; x--;
	}
	x = rq, y = cq;
	
	while (x-1 >= 1 && y+1 <= n && board[x-1][y+1] != 1) {
		squares++;
		x--; y++;
	}

	x = rq, y = cq;
	while (x+1 <=n && y-1 >= 1 && board[x+1][y] != 1) {
		squares++; y--; x++;
	}


	cout <<" \ntotal number of squares" << squares;
	return 0;
}