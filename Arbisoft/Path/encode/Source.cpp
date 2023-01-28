#include <iostream>
#include<queue>
#include<string>
using namespace std;

const int ROW = 6;
const int COL = 5;
const char arr[ROW][COL] = {
        {'A', 'B', 'C', 'D', 'E'},
       {'F', 'G', 'H', 'I', 'J'},
       {'K', 'L', 'M', 'N', 'O'},
       {'P', 'Q', 'R', 'S', 'T'},
       {'U', 'V', 'W', 'X', 'Y'},
       {'Z'},
};
bool isValidMove(int row, int col) {
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}


void findindex(int& r, int& c, char v) {
   for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == v)
            {
                r = i;
                c = j;
            }
        

        }

    }
}
int main() {
   
    int startRow = 0;
    int startCol = 0;
    int endRow = 4;
    int endCol = 4;

    string input;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            char b = input[i];
            findindex(endRow, endCol, b);

            while (arr[startRow][startCol] != input[i]) {
                if (isValidMove(endRow, endCol)) {
                    while (startRow > endRow) {
                        startRow--;
                        cout << "u";
                    }
                    while (startRow < endRow) {
                        startRow++;
                        cout << "d";
                    }

                    while (startCol > endCol) {
                        startCol--;
                        cout << "l";
                    }
                    while (startCol < endCol) {
                        startCol++;
                        cout << "r";
                    }
                }


            }
            cout << "#";
        }
        else
        {
             startRow = 0;
             startCol = 0;
        }
    }
   
    return 0;
}









































