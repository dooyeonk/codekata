#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min_idx = 0;
    
    if (arr.size() == 1) return {-1};
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }
    
    arr.erase(arr.begin() + min_idx);
    return arr;
}