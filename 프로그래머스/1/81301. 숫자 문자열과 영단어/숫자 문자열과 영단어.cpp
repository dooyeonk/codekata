#include <string>
#include <vector>

using namespace std;

int stringToInt(string s) {
    if (s == "zero") return 0;
    if (s == "one") return 1;
    if (s == "two") return 2;
    if (s == "three") return 3;
    if (s == "four") return 4;
    if (s == "five") return 5;
    if (s == "six") return 6;
    if (s == "seven") return 7;
    if (s == "eight") return 8;
    if (s == "nine") return 9;
    return -1;
}

int solution(string s) {
    string stringAnswer = "";
    string intString = "";
    
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            stringAnswer += c;
        } else {
            intString += c;
            
            int temp = stringToInt(intString);
            if (temp >= 0) {
                stringAnswer += (temp + '0');
                intString = "";
            }
        }
    }
    
    return stoi(stringAnswer);
}