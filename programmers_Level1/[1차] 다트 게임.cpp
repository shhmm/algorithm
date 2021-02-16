#include <string>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int prev = 0;
    int len = dartResult.length();
    for(int i = 0; i < len; i += 2){
        int now;
        if(dartResult[i+1] == '0'){
            now = 10;
            i++;
        }
        else{
            now = dartResult[i] - '0';
        }
        switch(dartResult[i+1]){
            case 'S': now = pow(now, 1);    break;
            case 'D': now = pow(now, 2);    break;
            case 'T': now = pow(now, 3);    break;
        }
        
        if(i+2 < len && dartResult[i+2] == '#'){
            now *= -1;
            prev = now;
            answer += now;
            i++;
        }
        else if(i+2 < len && dartResult[i+2] == '*'){
            now *= 2;
            answer += now + prev;
            prev = now;
            i++;
        }
        else{
            answer += now;
            prev = now;
        }
    }
    return answer;
}
