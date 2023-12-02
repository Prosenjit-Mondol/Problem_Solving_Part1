#include <iostream>
#include <cmath>

long long gcd(long long a, long long b) {
    // Base cases
    if (a == 0) return b;
    if (b == 0) return a;

    // Remove common factors of 2
    int shift = __builtin_ctzll(a | b);
    a >>= __builtin_ctzll(a);

    // Binary GCD algorithm
    do {
        b >>= __builtin_ctzll(b);
        if (a > b) std::swap(a, b);
        b -= a;
    } while (b);

    return a << shift;
}

int main() {
    // Input two integers a and b
    std::string a_str, b_str;
    std::cin >> a_str >> b_str;

    // Convert strings to integers
    long long a = std::stoll(a_str);
    long long b = std::stoll(b_str);

    // Ensure a is less than or equal to b
    if (a > b) {
        std::swap(a, b);
    }

    // Calculate and output the GCD
    long long result = gcd(a, b);
    std::cout << "GCD of " << a_str << " and " << b_str << " is: " << result << std::endl;

    return 0;
}
