#include <iostream>

using namespace std;

int main() {
    int nums[] = {2, 4, 6, 8, 10, 12}; 
    int *ptr_first = nums;
    cout << "First value: " << *ptr_first << endl;
    
    int last_value = *(nums + 5);
    cout << "Last value: " << last_value << endl;

    // int nums_size = sizeof(nums) / sizeof(int);
    int nums_size = end(nums) - begin(nums);
    int *ptr_mid = &nums[nums_size / 2];
    cout << "Mid value: " << *ptr_mid << endl;

}