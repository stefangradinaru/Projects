#include <iostream>
using namespace std;

int main() {
    const int CONST_SIZE = 9, SEVEN = 7;
    int mt[CONST_SIZE + 1][CONST_SIZE + 1];
    for (int i = 1; i <= CONST_SIZE; ++i) {
        for (int j = 1; j <= CONST_SIZE; ++j) {
            cin >> mt[i][j];
        }
    }
    int correct = 1, incorrect = 0;
    for (int i = 1; i <= CONST_SIZE; ++i) {
        for (int j = 1; j <= CONST_SIZE; ++j) {
            for (int counter = j; counter > 1 && incorrect == 0; --counter) {
                if (mt[i][j] == mt[i][counter - 1] || mt[j][i] == mt[counter - 1][i]) {
                    correct = 0;
                    incorrect = 1;
                }
            }
        }
    }
    int aux[CONST_SIZE + 1];
    for (int start_line = 1; start_line <= SEVEN; start_line += 3) {
        for (int start_column = 1; start_column <= SEVEN && incorrect == 0; start_column += 3) {
            for (int i = 1; i <= CONST_SIZE; ++i) {
                aux[i] = 0;
            }
            for (int x = start_line; x <= start_line + 2; ++x) {
                for (int y = start_column; y <= start_column + 2 ; ++y) {
                        ++aux[mt[x][y]];
                }
            }
            for (int i = 1; i <= CONST_SIZE && incorrect == 0; ++i) {
                if (aux[i] != 1) {
                    correct = 0;
                    incorrect = 1;
                }
            }
        }
    }
    if (correct == 1 && incorrect == 0) {
        cout << "corect";
    } else {
        cout << "incorect";
    }
    return 0;
}
