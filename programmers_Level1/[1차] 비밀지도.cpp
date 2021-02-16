#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int>::iterator it1 = arr1.begin();
    vector<int>::iterator it2 = arr2.begin();
    for(; it1 != arr1.end(); it1++, it2++){
        int num1 = *it1, num2 = *it2;
        string ans = "";
        for(int i = 0; i < n; i++){
            if(num1 % 2 || num2 % 2){
                ans = "#" + ans;
            }
            else{
                ans = " " + ans;
            }
            num1 /= 2;
            num2 /= 2;
        }
        answer.push_back(ans);
    }
    return answer;
}
