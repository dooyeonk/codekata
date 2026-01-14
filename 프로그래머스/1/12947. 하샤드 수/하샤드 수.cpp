#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num = x;
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    
    if (sum == 0) {
        return false;
    }
    
    return num % sum == 0;
}