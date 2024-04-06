#include <iostream>
#include <vector>
#include <algorithm>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    // Ensure nums1 is the smaller array.
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int x = nums1.size();
    int y = nums2.size();
    int low = 0, high = x;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if ((x + y) % 2 == 0) {
                return (std::max(maxLeftX, maxLeftY) + std::min(minRightX, minRightY)) / 2.0;
            } else {
                return std::max(maxLeftX, maxLeftY);
            }
        } else if (maxLeftX > minRightY) {
            high = partitionX - 1;
        } else {
            low = partitionX + 1;
        }
    }

    // Should not reach here
    throw std::invalid_argument("Input arrays are not sorted or not properly handled.");
}

int main() {
    std::vector<int> nums1 = {1, 3};
    std::vector<int> nums2 = {2};

    std::cout << "The median is " << findMedianSortedArrays(nums1, nums2) << std::endl;

    std::vector<int> nums3 = {1, 2};
    std::vector<int> nums4 = {3, 4};

    std::cout << "The median is " << findMedianSortedArrays(nums3, nums4) << std::endl;

    return 0;
}
