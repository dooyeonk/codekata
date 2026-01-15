#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int l = s.size();
    if (l % 2 == 0) {
        answer += s[l/2-1];
        answer += s[l/2];
        
    } else {
        // 1
        answer += s[l/2];
    }
    return answer;
}