#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<vector<int>>::iterator it1, it2;
    for(it1 = arr1.begin(), it2 = arr2.begin(); it1 != arr1.end(); it1++, it2++){
        vector<int> v;
        for(int i = 0; i < (*it1).size(); i++){
            v.push_back((*it1).at(i) + (*it2).at(i));
        }
        answer.push_back(v);
    }
    return answer;
}
