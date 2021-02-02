#include <string>
#include <vector>

using namespace std;
int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

string solution(int a, int b) {
    string answer = "";
    int days = 0;
    while(--a){
        days += month[a - 1];
    }
    days += b;
    switch(days % 7){
        case 1: answer = "FRI"; break;
        case 2: answer = "SAT"; break;
        case 3: answer = "SUN"; break;
        case 4: answer = "MON"; break;
        case 5: answer = "TUE"; break;
        case 6: answer = "WED"; break;
        case 0: answer = "THU"; break;
    }
    return answer;
}
