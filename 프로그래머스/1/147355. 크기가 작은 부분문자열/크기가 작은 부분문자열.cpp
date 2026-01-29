#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len_t = t.length();
    int len_p = p.length();
    
    long long val_p = stoll(p);
    
    for (int i = 0; i <= len_t - len_p; ++i) {
        string sub = t.substr(i, len_p);
        
        if (stoll(sub) <= val_p) {
            answer++;
        }
    }
    
    return answer;
}