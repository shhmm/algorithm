#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int size = completion.size();
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    answer = participant.at(size);
    for(int i=0; i<size; i++){
        if(participant.at(i).compare(completion.at(i))){answer = participant.at(i); break;}
    }
    return answer;
}
