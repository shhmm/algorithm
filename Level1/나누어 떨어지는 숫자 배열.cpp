#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(), arr.end());
    for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++){
        if(*it % divisor == 0) {answer.push_back(*it);}
    }
    if(answer.empty()){answer.push_back(-1);}
    return answer;
}
