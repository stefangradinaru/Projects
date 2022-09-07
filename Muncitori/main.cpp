#include <iostream>
#include <cstring>
using namespace std;

int is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}
const int MAX_LENGHT_AUX = 10001;
int aux[MAX_LENGHT_AUX];
int main() {
    const int MAX_LENGHT_TXT = 100;
    const int ONE = 1;
    const int START_DIGITS = 48;
    const int POWER = 10;
    const int START_NUMBER = 11;
    int n;
    char sentence[MAX_LENGHT_TXT];
    cin >> n;
    cin.getline(sentence, ONE);
    while (n > 0) {
        cin.getline(sentence, MAX_LENGHT_TXT);
        int x = 0, y = 0;
        int stop = 0, final_x = 0;
        for (int i = START_NUMBER; stop == 0; ++i) {
            if (is_digit(sentence[i]) == 1) {
                x = x * POWER + (sentence[i] - START_DIGITS);
                final_x = i;
            } else {
                stop = 1;
            }
        }
        stop = 0;
        for (int i = final_x + START_NUMBER; stop == 0; ++i) {
            if (is_digit(sentence[i]) == 1) {
                y = y * POWER + (sentence[i] - START_DIGITS);
            } else {
                stop = 1;
            }
        }
        aux[x] += y;
        --n;
    }
    int maximum = 0, worker = 0;
    for (int i = 1; i < MAX_LENGHT_AUX; ++i) {
        if (aux[i] > maximum) {
            maximum = aux[i];
            worker = i;
        }
    }
    cout << worker;
    return 0;
}
