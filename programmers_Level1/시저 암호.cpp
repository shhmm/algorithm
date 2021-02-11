#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i= 0 ; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 26;
            s[i] += n;
            if(s[i] < 'a'){
                s[i] += 26;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += n;
            if(s[i] > 'Z'){
                s[i] -= 26;
            }
        }
    }
    return s;
}
