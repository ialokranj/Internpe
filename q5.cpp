#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int findDuplicate(const std::vector<int>& nums) {
    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num) > 0) {
            return num;  // Found a duplicate
        } else {
            seen.insert(num);
        }
    }

    return -1;  // No duplicates found
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 4, 5};

    int duplicate = findDuplicate(nums);

    if (duplicate != -1) {
        cout << "Duplicate found: " << duplicate << endl;
    } else {
        cout << "No duplicate found." << endl;
    }

    return 0;
}
