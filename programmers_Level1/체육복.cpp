#include <string>
#include <vector>

using namespace std;

int student[32] = {1, };

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for(int i = 0; i < 32; i++){
        student[i] = 1;
    }
    for(int i = 0; i < lost.size(); i++){
        int index = lost[i];
        student[index]--;
    }
    for(int i = 0; i < reserve.size(); i++){
        int index = reserve[i];
        student[index]++;
    }
    for(int i = 1; i <= n; i++){
        if(student[i] == 2){
            if(student[i-1] == 0){
                student[i]--;
                student[i-1]++;
            }
            else if(student[i+1] == 0){
                student[i]--;
                student[i+1]++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(student[i]){
            answer++;
        }
    }
    return answer;
}
