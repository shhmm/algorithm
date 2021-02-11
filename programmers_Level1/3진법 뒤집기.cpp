#include <string>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

stack<int> s;

int solution(int n) {
    int answer = 0;
    int i = 0;
    while(n/3 != 0){
        s.push(n%3);
        n /= 3;
    }
    s.push(n);
    while(!s.empty()){
        answer += s.top() * (int)pow(3, i);
        s.pop();
        i++;
    }
    return answer;
}
