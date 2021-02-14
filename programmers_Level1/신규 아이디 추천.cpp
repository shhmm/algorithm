#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = new_id;
    for(int i = 0; i < answer.length(); i++){
        char c = tolower(answer[i]);
        if((c<'0'||c>'9')&&(c<'a'||c>'z')&&c!='-'&&c!='_'&&c!='.'){
            answer.erase(i, 1);
            i--;
            continue;
        }
        answer[i] = c;
    }
    while(1){
        for(int i = 0; i < answer.length(); i++){
            if(answer[i] == '.'){
                if(i == 0 || i == answer.length() - 1){
                    answer.erase(i, 1);
                    i--;
                }
                else{
                    if(answer[i+1] == '.'){
                        answer.erase(i, 1);
                        i--;
                    }
                }
            }
        }
        while(answer.length() < 3){
            if(answer.length() == 0){
                answer = "a";
            }
            answer += answer[answer.length() - 1];
        }
        if(answer.length() >= 16){
            answer = answer.substr(0, 15);
        }
        if(answer[answer.length() - 1] != '.'){break;}
    }
    return answer;
}
