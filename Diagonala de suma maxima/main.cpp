#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 51;
    int n, m[MAX_SIZE][MAX_SIZE], aux[MAX_SIZE][MAX_SIZE];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> m[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            aux[j][n - i + 1] = m[n - i + 1][n - j + 1];
        }
    }
    const int MINIMUM = -5001;
    int sum_max = MINIMUM, matrix = 1;
    while (matrix <= 2) {
        for (int j = n; j >= 1; --j) {                          //parcurgerea fiecarui element de pe prima linie
            int sum_parallel = 0;
            for (int line = 1, column = j; line <= n && column <= n; ++line, ++column ) {   //parcurgerea parelelei(la diagonala principala) pornite de pe prima linie a matricei
                sum_parallel = sum_parallel + m[line][column];  //aflam suma elementelor fiecarei paralele
            }
            if (sum_parallel > sum_max) {
                sum_max = sum_parallel;                         //*Aflarea sumei maxime a elementelor din fiecare paralela
            }
        }
        for (int i = 2; i <= n; ++i) {                          //parcurgerea fiecarui element de pe prima coloana
            int sum_parallel = 0;
            for (int line = i, column = 1;line <= n && column <= n; ++line, ++column) {    //parcurgerea paralelei (la diagonala principala) pornite de pe prima coloana a matricei
                sum_parallel = sum_parallel + m[line][column];
            }
            if (sum_parallel > sum_max) {
                sum_max = sum_parallel;                     //**Aflarea sumei maxime a elementelor din fiecare paralela
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {             // Dau valorile deja rotite matricei initiale pentru a parcurge din nou si elementele de pe paralelele diagonalei secundare
                m[i][j] = aux[i][j];
            }
        }
        ++matrix;
    }
    cout << "\n" << sum_max;
    return 0;
}
