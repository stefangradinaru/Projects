#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 50;
    int n, m, mt[MAX_SIZE + 1][MAX_SIZE + 1], aux[MAX_SIZE * MAX_SIZE + 1];
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
        }
    }
    int begin_line = 1,  begin_column = 1, end_line = n, end_column = m;
    int cells = 0;
    while (cells < n * m) {
        for (int j = begin_column; j <= end_column; ++j) {
            aux[cells] = mt[begin_line][j];
            ++cells;
        }
        for (int i = begin_line + 1; i <= end_line; ++i) {
            aux[cells] = mt[i][end_column];
            ++cells;
        }
        for (int j = end_column - 1; j >= begin_column && cells < n * m; --j) {
            aux[cells] = mt[end_line][j];
            ++cells;
        }
        for (int i = end_line - 1; i > begin_line && cells < n * m; --i) {
            aux[cells] = mt[i][begin_column];
            ++cells;
        }
        ++begin_line;
        ++begin_column;
        --end_line;
        --end_column;
    }
    int negative = 0;
    for (int i = 0; i < cells - 1 && negative == 0; ++i) {
        if (aux[i] >= aux[i + 1]) {
            negative = 1;
        }
    }
    if (negative == 0) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
