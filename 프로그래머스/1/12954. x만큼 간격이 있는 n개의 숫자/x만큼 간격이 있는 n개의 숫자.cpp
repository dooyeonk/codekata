#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    while (answer.size() < n) {
        long long last = !answer.empty() ? answer.back() : 0;
        answer.push_back(last + x);
    }
    return answer;
}