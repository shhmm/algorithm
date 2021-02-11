#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for(vector<vector<int>>::iterator it = commands.begin(); it != commands.end(); it++){
        int start = (*it).at(0), fini = (*it).at(1), index = (*it).at(2);
        temp.clear();
        for(int i = start - 1; i < fini; i++){
            temp.push_back(array.at(i));
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp.at(index - 1));
    }
    return answer;
}
