#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    if (n == 1) { return 4; }
    
    long long min = 1;
    long long max = n;
    
    while (min <= max) {
        long long mid = min + (max - min) / 2;
        
        if (mid == n / mid && n % mid == 0) {
            answer = (mid + 1) * (mid + 1);
            break;
        } else if (mid < n / mid) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }        
    }
    
    return answer;
}
