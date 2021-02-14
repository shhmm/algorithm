#include <string>
#include <vector>
#include <stack>
using namespace std;

stack<int> s;
int b[30][30] = {0,};

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int x = 0, y = 0;
    for(vector<vector<int>>::iterator i = board.begin(); i != board.end(); i++){
        y = 0;
        for(vector<int>::iterator j = i->begin(); j != i->end(); j++){
            b[x][y] = *j;
            y++;
        }
        x++;
    }
    for(vector<int>::iterator it = moves.begin(); it != moves.end(); it++){
        int index = 0;
        while(index != y){
            int temp = b[index][*it - 1];
            if(temp){
                if(!s.empty() && s.top() == temp){
                    answer += 2;
                    s.pop();
                }
                else{
                    s.push(temp);
                }
                b[index][*it - 1] = 0;
                break;
            }
            index++;
        }
    }
    return answer;
}
