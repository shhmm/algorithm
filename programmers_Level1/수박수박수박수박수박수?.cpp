#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int index = 0;
    while(index < n){
        answer += (index % 2 == 0) ? "수" : "박";
        index++;
    }
    return answer;
}
