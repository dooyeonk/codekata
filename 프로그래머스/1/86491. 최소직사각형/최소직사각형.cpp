#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int l = 0, r = 0;
    
    for (auto& size : sizes) {
        int left = 0, right = 0;
        if (size[0] < size[1]) {
            left = size[1];
            right = size[0];
        } else {
            left = size[0];
            right = size[1];
        }
        
        if (l < left) {
            l = left;
        }
        
        if (r < right) {
            r = right;
        }
    }
    
    answer = l * r;
    return answer;
}