#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int n = 0;
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'p') n++;
        else if(s[i] == 'y') n--;
    }
    return (n == 0) ? true : false;
}
