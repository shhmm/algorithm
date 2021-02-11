#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long temp = n;
    while(temp != 1 && answer != 500){
        temp = (temp % 2 == 0) ? temp / 2 : temp * 3 + 1;
        answer++;
    }
    return (answer == 500 && n != 1) ? -1 : answer;
}
