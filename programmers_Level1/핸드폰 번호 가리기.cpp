#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i;
    for(i = 0; i < phone_number.length() - 4; i++){
        answer += "*";
    }
    answer += phone_number.substr(phone_number.length() - 4, 4);
    return answer;
}
