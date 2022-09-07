#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_SIZE = 99;
    int n;
    double v[MAX_SIZE + 1];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    const int TEN = 100;
    if (v[1] < v[2]) {
        cout << "Veniturile au crescut cu: ";
        for (int i = 1; i < n; ++i) {
            if (v[i + 1] - v[i] > v[i]) {
                cout << ">100% ";
            } else {
                cout << fixed << setprecision(3) << (v[i + 1] - v[i]) / v[i] * TEN << "% ";
            }
        }
    } else if (v[1] == v[2]) {
        cout << "Veniturile au ramas la fel";
    } else {
        cout << "Veniturile au scazut cu: ";
        for (int i = 1; i < n; ++i) {
            cout << fixed << setprecision(3) << (v[i] - v[i + 1]) / v[i] * TEN << "% ";
        }
    }
    return 0;
}
