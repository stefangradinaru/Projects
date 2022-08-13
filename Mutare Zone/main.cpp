#include <iostream>
using namespace std;

int main() {
    int N, mt[51][51], aux[51][51];
    cin >> N;
    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= N; ++j) {
            cin >> mt[i][j];
            aux[i][j] = mt[i][j];
        }
    }
    int ending_zone1;
    if(N % 2 == 0) {
        ending_zone1 = N / 2 - 1;
    } else {
        ending_zone1 = N / 2;
    }
    for(int i = 1; i <= ending_zone1; ++i) {              //PERMUTAREA ZONEI 1
        for(int j = i + 1; j <= N - i; ++j) {
            mt[j][N - i + 1] = aux[i][j];
        }
    }
    for(int i = 2; i <= N - 1; ++i) {
        if(i <= N / 2) {
            for(int j = N - i + 2; j <= N; ++j){          //PERMUTAREA ZONEI 2
               mt[j][N - i + 1] = aux[i][j];
            }
        } else {
            for(int j = i + 1; j <= N; ++j) {
               mt[j][N - i + 1] = aux[i][j];
            }
        }

    }
    for(int i = N / 2 + 2; i <= N; ++i){                  //PERMUTAREA ZONEI 3
        for(int j = N - i + 2; j <= i - 1; ++j) {
            mt[j][N - i + 1] = aux[i][j];
        }
    }
    for(int i = 2; i <= N - 1; ++i) {                     //PERMUTAREA ZONEI 4
        if(i <= N / 2) {
            for(int j = 1; j <= i - 1; ++j) {
                mt[j][N - i + 1] = aux[i][j];
            }
        } else {
            for(int j = 1; j <= N - i; ++j) {
               mt[j][N - i + 1] = aux[i][j];
            }
        }
    }
    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= N; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

