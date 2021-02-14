#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int snum[501] = {0,};

bool compare(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> fail;
    int pnum = stages.size();
    for(vector<int>::iterator it = stages.begin(); it != stages.end(); it++){
        snum[*it]++;
    }
    for(int i = 1; i <= N; i++){
        if(pnum == 0){fail.push_back({0,i}); continue;}
        double prob = (double)snum[i] / (double)pnum;
        pnum -= snum[i];
        fail.push_back({prob, i});
    }
    sort(fail.begin(), fail.end(), compare);
    for(vector<pair<double, int>>::iterator it = fail.begin(); it != fail.end(); it++){
        answer.push_back(it->second);
    }
    return answer;
}
