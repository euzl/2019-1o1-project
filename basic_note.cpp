/* 문제풀이하면서 필요한 기초개념들 기록 - C++ */

/* 최댓값/최솟값 */
#include <algorithm>
max(int num1, int num2, ...); //인자 중 최대값 반환. 변수 못넣음. 
min(int num1, int num2, ...); // 최소값

/* 절댓값 */
#include <cstdlib> // int 형인 경우
#include <cmath.h> // double, float
abs(int num); // 절대값 반환 (absolute value)