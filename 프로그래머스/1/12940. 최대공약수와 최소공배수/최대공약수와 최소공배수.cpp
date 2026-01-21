#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b==0) {
        return a;
    }
    
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    if (n == m) {
        return { n, n };
    }
    
    if (n > m) {
        answer.push_back(gcd(n, m));
        answer.push_back(lcm(n, m));
    } else {
        answer.push_back(gcd(m, n));
        answer.push_back(lcm(m, n));
    }
    return answer;
}