#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    answer = sqrt(n);
    if(n != pow(answer, 2)){answer = -1;}
    return (answer == -1) ? -1 : pow(answer+1, 2);
}
