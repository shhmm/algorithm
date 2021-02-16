#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int row[12] = {4, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4};
int col[12] = {2, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 3};
int left = 10, right = 11;

string funcL(int num){
    left = num;
    return "L";
}
string funcR(int num){
    right = num;
    return "R";
}

string solution(vector<int> numbers, string hand) {
    string answer = "";    
    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        int num = *it;
        switch(num){
            case 1:
            case 4:
            case 7: answer += funcL(num);  break;
            case 3:
            case 6:
            case 9: answer += funcR(num);  break;
            default: {
                if ((abs(row[left] - row[num]) + abs(col[left] - col[num])) == (abs(row[right] - row[num]) + abs(col[right] - col[num]))){
                    answer += (hand == "right") ? funcR(num) : funcL(num);
                    break;
                }
                else if((abs(row[left] - row[num]) + abs(col[left] - col[num])) < (abs(row[right] - row[num]) + abs(col[right] - col[num]))){
                    answer += funcL(num);  break;
                }
                else{
                    answer += funcR(num);  break;
                }
                      }
        }
    }
    return answer;
}
