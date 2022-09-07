#include <iostream>
using namespace std;

void aduna(int a[], int b[], int rezultat[]) {
    if (a[0] < b[0]) {
        for (int i = b[0]; i > a[0]; --i) {
            a[i] = 0;
        }
        a[0] = b[0];
    } else {
        for (int i = a[0]; i > b[0]; --i) {
            b[i] = 0;
        }
    }
    for(int i = 1; i <= a[0]; ++i) {
        rezultat[i] = 0;
    }
        int creste = 0;
    for (int i = 1; i <= a[0]; ++i) {
        rezultat[i] = a[i] + b[i] + creste;
        creste = 0;
        if (rezultat[i] > 9) {
            creste = 1;
            rezultat[i] %= 10;
        }
    }
    if (creste == 1) {
        rezultat[a[0] + 1] = 1;
        rezultat[0] = a[0] + 1;
    } else {
        rezultat[0] = a[0];
    }
}
    for (int i = 0; i <= rezultat[0]; ++i) {
        cout << rezultat[i] << " ";
    }
}
int main() {
    int a[1001], b[1001], rezultat[1001];
    for (int i = 0; i <= a[0]; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j <= b[0]; ++j) {
        cin >> b[j];
    }
    aduna(a, b, rezultat);
    return 0;
}
