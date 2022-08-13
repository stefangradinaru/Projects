#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;
int mt[MAX_SIZE + 1][MAX_SIZE + 1], aux[MAX_SIZE];
int main() {
    int n, m, q;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
        }
    }
    cin >> q;
    int middle, left, right;
    while (q > 0) {
        for (int i = 1; i <= m; ++i) {
            cin >> aux[i];
        }
      	left = 1, right = n;
        while (left < right) {
            middle = (left + right) / 2;
            if (mt[middle][1] < aux[1]) {
                left = middle + 1;
            }
            else {
                right = middle;
            }
        }
        if (aux[1] == mt[left][1]) {
            int k;
            for (k = 1; k <= m; ++k) {
                if (mt[left][k] != aux[k]) {
                    --k;
                    ++left;
                    if (left == n + 1 || aux[1] != mt[left][1]) {
                        cout << "NU" << "\n";
                        k = m + 2;
                    }
                }
            }
            if (k == m + 1) {
                cout << "DA" << "\n";
            }
        } else {
            cout << "NU" << "\n";
        }
        --q;
    }
    return 0;
}
