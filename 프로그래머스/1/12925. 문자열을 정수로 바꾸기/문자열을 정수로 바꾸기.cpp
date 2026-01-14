#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int flag = 1;
    vector<int> list = {};
    
    for (auto c : s) {
        if (c == '-') {
            flag = -1;
            continue;
        } else if (c == '+') {
            flag = 1;
            continue;
        }
        
        list.push_back(c-'0');
    }
    
    for (int i = 0; i < list.size(); ++i) {
        int num = list[i];
        answer = answer * 10 + num;
    }
    
    answer *= flag;
    
    return answer;
}