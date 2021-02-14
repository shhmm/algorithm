#include <string>
#include <vector>

using namespace std;

int prime[1000000] = {0,};

int solution(int n) {
    int answer = 1;
    prime[0] = 2;
    for(int i = 3; i <= n; i++){
        int index = 0;
        while(prime[index]){
            if(i % prime[index] == 0){break;}
            index++;
        }
        if(!prime[index]){
            answer++;
            prime[index] = i;
        }
    }
    return answer;
}

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 1;
    for(int i = 3; i <= n; i += 2){
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                answer--;
                break;
            }
        }
        answer++;
    }
    return answer;
}
