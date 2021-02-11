#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int a[5] = {1, 2, 3, 4, 5};
int b[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int c[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score_a = 0, score_b = 0, score_c = 0;
    int score_max = 0;
    for(int i = 0; i < answers.size(); i++){
        if(answers.at(i) == a[i%5]){score_a++;}
        if(answers.at(i) == b[i%8]){score_b++;}
        if(answers.at(i) == c[i%10]){score_c++;}
    }
    score_max = max(score_a, score_b);
    score_max = max(score_max, score_c);
    if(score_a == score_max){answer.push_back(1);}
    if(score_b == score_max){answer.push_back(2);}
    if(score_c == score_max){answer.push_back(3);}
    return answer;
}
