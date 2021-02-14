#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            index = 0;
        }
        if(index % 2 == 1){
            s[i] = toupper(s[i]);
        }
        if(index % 2 == 0){
            s[i] = tolower(s[i]);
        }
        index++;
    }
    return s;
}
