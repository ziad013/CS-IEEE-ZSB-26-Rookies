#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    int W[101];
    bool attached[101];
    for (int i = 1; i <= N; i++) {
        cin >> W[i];
        attached[i] = false;
    }

    int Q;
    cin >> Q;

    int weight = X;
    for (int i = 0; i < Q; i++) {
        int P;
        cin >> P;

        if (!attached[P]) {
            weight += W[P];
            attached[P] = true;
        } else {
            weight -= W[P];
            attached[P] = false;
        }

        cout << weight << endl;
    }

    return 0;
}
