#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

int main() {
    int nums[] = {4, 5, 6, 7, 8};

    size_t size = end(nums) -  begin(nums);
    cout << "Size of array: " << size << endl;

    int *ptr_nums = nums;

    cout << "Pointer: " << ptr_nums[1] << endl;

    return 0;
}
