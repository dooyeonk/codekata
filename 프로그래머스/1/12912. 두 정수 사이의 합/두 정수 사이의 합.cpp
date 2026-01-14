#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b) return a;
    
    long long min = a < b ? a : b;
    long long max = a < b ? b : a;
    
    answer = (min + max) * (max - min + 1) / 2;
    
    return answer;
}