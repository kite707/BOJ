#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int solution(vector<int> priorities, int location) {
    int answer = 0;

    priority_queue<int>pq;
    queue<pair<int, int>>q;
    for (int i = 0; i < priorities.size(); i++) {
        q.push(make_pair(priorities[i], i));
        pq.push(priorities[i]);// 우선도 큰것부터 차례대로 정렬
    }
    while (!q.empty()) {
        int pri = q.front().first;
        int idx = q.front().second;
        q.pop(); //큐에서 삭제

        if (pri == pq.top()) {//우선도 제일 큰거면 pop하기
            pq.pop(); 
            answer++;

            if (idx == location) {
                break;
            }
        }
        else {
            q.push(make_pair(pri, idx));
        }
    }
    return answer;
}
