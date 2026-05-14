#include <iostream>
#include <string>

using namespace std;

// 구조체 정의
struct Player {
    string name;
    string position;
    int height;
    int weight;
};

int main() {

    // 구조체 배열 생성
    Player team[3] = {
        {"Son", "Forward", 183, 77},
        {"Kim", "Defender", 190, 82},
        {"Lee", "Midfielder", 175, 68}
    };

    // 배열 출력
    for (int i = 0; i < 3; i++) {

        cout << "===== Player " << i + 1 << " =====" << endl;

        cout << "Name : " << team[i].name << endl;
        cout << "Position : " << team[i].position << endl;
        cout << "Height : " << team[i].height << endl;
        cout << "Weight : " << team[i].weight << endl;

        cout << endl;
    }

    return 0;
}