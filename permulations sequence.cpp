#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> sequence = {1, 2, 3};

    std::sort(sequence.begin(), sequence.end());

    do {
        for (int num : sequence) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(sequence.begin(), sequence.end()));

    return 0;
}
