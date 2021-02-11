#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(char a, char b){
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.begin(), s.end(), compare);
    answer = stoll(s);
    return answer;
}
