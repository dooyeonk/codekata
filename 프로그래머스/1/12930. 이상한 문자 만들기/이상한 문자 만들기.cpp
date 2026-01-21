#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    const int diff = 'a' - 'A';
    
    for (char c : s) {
        if (c == ' ') {
            idx = 0;
            answer += c;
            continue;
        }
        
        if (idx % 2 == 0) {
            if (c >= 'a' && c <= 'z') {
                answer += c - diff;
            }
            else {
                answer += c;
            }
        } else {
            if (c >= 'A' && c <= 'Z') {
                answer += c + diff;
            } else {
                answer += c;
            }
        }
        
        idx++;
    }
    return answer;
}