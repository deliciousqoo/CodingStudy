/*
* 프로그래머스 주식가격
* 자료구조 - 큐
* 20240207
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    answer.resize(prices.size(), 0);
    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            answer[i]++;
            if (prices[i] > prices[j]) break;
        }
    }

    return answer;
}