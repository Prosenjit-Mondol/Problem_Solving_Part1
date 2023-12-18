#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int takahashiDistance = 0;
    int aokiDistance = 0;

    for (int i = 0; i < X; i++) {
        if (i % (A + C) < A) {
            takahashiDistance += B;
        }
        if (i % (D + F) < D) {
            aokiDistance += E;
        }
    }

    if (takahashiDistance > aokiDistance) {
        cout << "Takahashi" << endl;
    } else if (aokiDistance > takahashiDistance) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}