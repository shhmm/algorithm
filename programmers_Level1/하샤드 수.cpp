#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int y = x;
    int z = 0;
    while(y){
        z += y % 10;
        y /= 10;
    }
    return (x % z == 0) ? true : false;
}
