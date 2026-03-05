// https://school.programmers.co.kr/learn/courses/30/lessons/120820

#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    int target = 2022;
    answer = target - age + 1;
    return answer;
}
