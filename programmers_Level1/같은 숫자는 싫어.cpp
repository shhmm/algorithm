#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr.at(0));
    for(int i = 1; i < arr.size(); i++){
        if(arr.at(i) - arr.at(i-1)){answer.push_back(arr.at(i));}
    }
    return answer;
}
