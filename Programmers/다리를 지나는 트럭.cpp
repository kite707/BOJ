#include <string>
#include <vector>
#include <iostream>
#define P pair<int,int> 
using namespace std;


int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    vector <P> bridge;
    int weightsum = 0;
    while (!truck_weights.empty()) {
        //다리 끝까지 가면 나감
        int curweight = truck_weights.front();
        truck_weights.erase(truck_weights.begin());
        bool flag = true;
        while (flag) {
            if (bridge.size() < bridge_length) {
                //무게 초과안하면 하나 올림
                if (weightsum + curweight <= weight) {
                    bridge.push_back(P(curweight, 0));
                    weightsum += curweight;
                    flag = false;;
                }
            }
            time++;
            for (int i = 0; i < bridge.size(); i++) {
                bridge[i].second++;
            }
            if (!bridge.empty()) {
                if (bridge[0].second == bridge_length) {
                    weightsum = weightsum - bridge[0].first;
                    bridge.erase(bridge.begin());
                }
            }

        }  
        
    }
    while (!bridge.empty()) {
        if (bridge[0].second == bridge_length) {
            bridge.erase(bridge.begin());
        }
        else {
            for (int i = 0; i < bridge.size(); i++) {
                bridge[i].second++;
            }
            time++;
        }

    }
    time++;
    return time;
}

int main() {
    vector<int> vec = { 10,10,10,10,10,10,10,10,10,10 };
    cout << solution(100, 100, vec);

}
