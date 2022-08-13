#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 50;
    int n, m[MAX_SIZE + 1][MAX_SIZE + 1], trans_m[MAX_SIZE + 1][MAX_SIZE + 1];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> m[i][j];
            trans_m[j][i] = m[i][j];
        }
    }
    int counter = 0;
    for (int i = 1; i <= n; ++i) {
        ++counter;
        int line = i, column = 1;
        while (line >= 1 && column <= n) {
            if (counter % 2 != 0) {
                cout << m[line][column] << " ";
            } else {
                cout << trans_m[line][column] << " ";
            }
            --line;
            ++column;
        }
    }
    for (int j = 2; j <= n; ++j) {
        ++counter;
        int line = n, column = j;
        while (line >= 1 && column <= n) {
            if (counter % 2 != 0) {
                cout << m[line][column] << " ";
            } else {
                cout << trans_m[line][column] << " ";
            }
            --line;
            ++column;
        }
    }
    return 0;
}
