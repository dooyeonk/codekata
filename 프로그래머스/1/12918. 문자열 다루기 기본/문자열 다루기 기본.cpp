#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.size() != 4 && s.size() != 6) {
       return false; 
    }
    
    for (auto c : s) {
        int cInt = c - '0';
        if (cInt < 0 || cInt > 9) {
            answer = false;
        }
    }
    return answer;
}