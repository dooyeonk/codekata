#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> list = {};
    
    while (n > 0) {
        list.push_back(n%10);
        n = n / 10;
    }
    
    sort(list.begin(), list.end(), [](int a, int b) {
        return a > b;
    });
    
    for (auto l : list) {
        answer = answer * 10 + l;
    }
    
    return answer;
}