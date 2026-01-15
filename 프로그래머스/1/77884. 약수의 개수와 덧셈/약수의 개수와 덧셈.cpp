#include <string>
#include <vector>

using namespace std;

vector<int> getDevisors(int n) {
    vector<int> d = {};
    
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            d.push_back(i);
            
            if (i * i != n) {
                d.push_back(n / i);
            }
        }
    }
    
    return d;
}

int solution(int left, int right) {
    int answer = 0;
    
    for (int i=left; i<=right; ++i) {
        auto devisors = getDevisors(i);
        answer = devisors.size() % 2 == 0 ? answer + i : answer - i;
    }
    return answer;
}