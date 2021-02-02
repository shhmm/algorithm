#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() != 1){
        vector<int>::iterator min = arr.begin();
        for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++){
            if(*it < *min) {min = it;}
        }
        arr.erase(min);
        answer = arr;
    }
    else{
        answer.push_back(-1);
    }
    return answer;
}
