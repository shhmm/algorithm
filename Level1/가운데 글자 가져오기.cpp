#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.length();
    answer = s.substr(size / 2 - 1 + (size % 2), 2 - (size % 2));
    return answer;
}
