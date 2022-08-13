#include <iostream>
using namespace std;

int main() {
    const int max_N = 51, max_M = 51;
    int N, M, mt[max_N][max_M], i, j, l;
    cin >> N >> M;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            cin >> mt[i][j];
        }
    }
    cin >> i >> j >> l;
    const int max_sub = l + 1;
    int aux[max_sub][max_sub], aux2[max_sub][max_sub];
    int line = 1;
    for (int submat_i = i; submat_i <= i + l - 1; ++submat_i) {
            int column = 1;
        for (int submat_j = j; submat_j <= j + l - 1; ++submat_j) {
            aux[line][column] = mt[submat_i][submat_j];
            ++column;
        }
        ++line;
    }
    for (int i = 1; i <= l; ++i) {
        for (int j = 1; j <= l; ++j) {
            aux2[j][l - i + 1] = aux[l - i + 1][l - j + 1];
        }
    }
         int submat_i = i;
    for (int lineage = 1; lineage <= l; ++lineage) {
         int submat_j = j;
        for (int page = 1; page <= l; ++page) {
             mt[submat_i][submat_j] = aux2[lineage][page];
             ++submat_j;
        }
        ++submat_i;
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

