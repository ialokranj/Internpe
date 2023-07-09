#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int findDuplicate(const std::vector<int>& nums) {
    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return num;  // Duplicate found
        }
        seen.insert(num);
    }

    return -1;  // No duplicate found
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2, 5};  // Example array
    int duplicate = findDuplicate(nums);

    if (duplicate != -1) {
        cout << "Duplicate found: " << duplicate << endl;
    } else {
        cout << "No duplicate found." << endl;
    }

    return 0;
}
