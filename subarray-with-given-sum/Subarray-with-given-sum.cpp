#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> subarraySum(int arr[], int n, long long s) {
      int current_sum = arr[0];
      int start = 0;
      for (int i = 1; i < n; i++) {
        current_sum += arr[i];
        
        while (current_sum > s && start < i - 1) {
          current_sum -= arr[start];
          start++;
        }
        if (current_sum == s)
          return {++start, (++i)};
      }
      return {-1};
    }
};

int main() {
  int arr[] = {1,2,3,7,5};
  Solution p1;
  vector<int> ans = p1.subarraySum(arr, 5, 12);
  for(auto i = ans.begin(); i != ans.end(); ++i) {
    cout<<*i<<" ";
  }
  cout<<endl;
}
