#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> v;
    int answer = 0;
    
    if (n == 0) return 0;
    
    while (n > 0) {
        v.push_back(n % 3);
        n /= 3;
    }
    
    long long power = 1;
    while(v.size() > 0) {
        answer += v.back() * power;
        power *= 3;
        v.pop_back();
    }
    
    return answer;
}