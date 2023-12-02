#include <iostream>

bool whoGoesAhead(int A, int B, int C, int D, int E, int F, int X) {
    // Initialize positions of Takahashi and Aoki
    int takahashiPosition = 0;
    int aokiPosition = 0;
    
    // Simulate jogging and resting cycles until time X
    int currentTime = 0;
    while (currentTime < X) {
        // Takahashi's turn
        takahashiPosition += A * B;
        currentTime += A;
        if (currentTime >= X) {
            break;  // If time is greater than or equal to X, exit the loop
        }

        // Takahashi's rest
        currentTime += C;

        // Aoki's turn
        aokiPosition += D * E;
        currentTime += D;
        if (currentTime >= X) {
            break;  // If time is greater than or equal to X, exit the loop
        }

        // Aoki's rest
        currentTime += F;
    }

    // Compare positions at time X
    return takahashiPosition > aokiPosition;
}

int main() {
    int A,B,C,D,E,F,X;
    std::cin>>A>>B>>C>>D>>E>>F>>X;

    bool takahashiGoesAhead = whoGoesAhead(A, B, C, D, E, F, X);

    if (takahashiGoesAhead) {
        std::cout << "Takahashi goes ahead." << std::endl;
    } else {
        std::cout << "Aoki goes ahead." << std::endl;
    }

    return 0;
}
