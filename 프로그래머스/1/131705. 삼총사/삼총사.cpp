#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    int length = number.size();
    sort(number.begin(), number.end());
    
    for(int i = 0; i < length-2; ++i) {
        int l = i+1;
        int r = length-1;
        
        while (l < r) {
            int sum = number[i] + number[l] + number[r];
            if (sum == 0) {
                if (number[l] == number[r]) {
                    int count = r - l + 1;
                    answer += count * (count - 1) / 2;
                    break;
                }
                else {
                    int lv = number[l];
                    int lc = 0;
                    
                    while (l < r && number[l] == lv) {
                        lc++;
                        l++;
                    }
                    
                    int rv = number[r];
                    int rc = 0;
                    
                    while (l <= r && number[r] == rv) {
                        rc++;
                        r--;
                    }
                    
                    answer += (lc * rc);
                }
            } else if (sum < 0) {
                l++;
            } else {
                r--;
            }
        }
    }
     
    return answer;
}