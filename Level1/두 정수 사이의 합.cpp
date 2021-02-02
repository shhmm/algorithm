#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long sum = a + b;
    long long num = abs(a - b) + 1;
    answer = sum * num / 2;
    return answer;
}
