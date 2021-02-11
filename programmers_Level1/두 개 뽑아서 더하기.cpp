#include <string>
#include <vector>
#include <set>
using namespace std;

set<int> s;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    for(int i = 0; i < size - 1; i++){
        for(int j = i+1; j < size; j++){
            s.insert(numbers.at(i)+numbers.at(j));
        }
    }
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        answer.push_back(*it);
    }
    return answer;
}
