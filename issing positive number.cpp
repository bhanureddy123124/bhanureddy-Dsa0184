#include <iostream>
#include <vector>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();

    // Place each number in its correct position (if possible)
    for (int i = 0; i < n; ++i) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // Find the first missing positive number
    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    // If all numbers from 1 to n are present, the missing number is n + 1
    return n + 1;
}

int main() {
    vector<int> nums = {3, 4, -1, 1};
    cout << "The first missing positive number is: " << firstMissingPositive(nums) << endl;

    nums = {1, 2, 0};
    cout << "The first missing positive number is: " << firstMissingPositive(nums) << endl;

    nums = {7, 8, 9, 11, 12};
    cout << "The first missing positive number is: " << firstMissingPositive(nums) << endl;

    return 0;
}
