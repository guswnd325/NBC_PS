// https://school.programmers.co.kr/learn/courses/30/lessons/12931

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int n) {
    int answer = 0;
    char str[10]; 
    
    sprintf(str, "%d", n); 
    
    for (int i = 0; i < strlen(str); i++) {
        answer += str[i] - '0';
    }
    
    return answer;
}
