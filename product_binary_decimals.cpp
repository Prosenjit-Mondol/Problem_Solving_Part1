#include <iostream>
#include <vector>

bool isValueEqualToProductOfSum(const std::vector<int>& nums, int value) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int product_of_sum = 1;
    for (int num : nums) {
        product_of_sum *= sum;
    }

    return product_of_sum == value;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5,6};
    int given_value = 120; // Example given value

    if (isValueEqualToProductOfSum(nums, given_value)) {
        std::cout << "The given value is equal to the product of the sum of elements in the vector." << std::endl;
    } else {
        std::cout << "The given value is NOT equal to the product of the sum of elements in the vector." << std::endl;
    }

    return 0;
}
