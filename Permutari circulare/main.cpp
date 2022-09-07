#include <iostream>
using namespace std;
    const int MAX_SIZE = 1000001;
    int v[MAX_SIZE];
    int vx[MAX_SIZE];
int main() {
    int N, K, P;
    cin >> N >> K >> P;
    for(int i = 1; i <= N; ++i) {
        cin >> v[i];
    }
    while(K >= N) {
        K = K % N;
    }
    if(P == -1) {
        int start_string = N - K + 1;
        for(int i = 1; i <= K; ++i) {
            vx[i] = v[start_string];
            ++start_string;
        }
        int j = 1;
        for(int i = N -(N - K) + 1; i <= N; ++i) {
            vx[i] = v[j];
            ++j;
        }
    }
    if(P == 1) {
        int start_string2 = N - (N - K) + 1;
        for(int i = 1; i <= N - K; ++i) {
            vx[i] = v[start_string2];
            ++start_string2;
        }
        int k = 1;
        for(int i = (N - K) + 1; i <= N; ++i) {
            vx[i] = v[k];
            ++k;
        }
    }
    for(int i = 1; i <= N; ++i) {
        cout << vx[i] << " ";
    }

    return 0;
}
