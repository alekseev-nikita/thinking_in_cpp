#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto first = nums.cbegin(), last = nums.cend();
  auto mid = first + (last - first) / 2;
  int s = 9;
  while(first != last && s != *mid) {
    cout << "Try mid = " << *mid << endl;
    if(s > *mid) {
      first = mid;
    }
    else {
      last = mid;
    }
    mid = first + (last - first) / 2;
  }
  cout << "Was looking for: " << *mid << endl;
}
