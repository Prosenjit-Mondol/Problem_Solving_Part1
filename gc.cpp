#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

mp::cpp_int gcd(mp::cpp_int a, mp::cpp_int b) {
    while (b != 0) {
        mp::cpp_int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Example usage with large numbers
    mp::cpp_int num1("1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890");
    mp::cpp_int num2("9876543210987654321098765432109876543210987654321098765432109876543210987654321098765432109876543210");

    mp::cpp_int result = gcd(num1, num2);

    std::cout << "GCD: " << result << std::endl;

    return 0;
}
