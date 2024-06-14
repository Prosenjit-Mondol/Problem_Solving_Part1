#include <iostream>
#include <vector>

// Function to generate the array
std::vector<int> generateArray(int N) {
    std::vector<int> A(N, 1);
    return A;
}

// Function to print the array
void printArray(const std::vector<int>& A) {
    for (int i = 0; i < A.size(); i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int N;
    std::cout << "Enter an odd integer N: ";
    std::cin >> N;

    std::vector<int> A = generateArray(N);

    std::cout << "Generated array: ";
    printArray(A);

    return 0;
}
