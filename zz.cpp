#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to count permutations
int countPermutations(int n) {
    return factorial(n);
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int num_permutations = countPermutations(n);
    std::cout << "Number of permutations of " << n << " numbers: " << num_permutations << std::endl;

    return 0;
}
