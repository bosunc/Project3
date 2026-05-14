#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;
};

void changeScore(Student* s) {

    cout << "함수 안 주소 : " << s << endl;

    s->score = 100;
}

int main() {

    Student st = { "Kim", 50 };

    cout << "main 주소 : " << &st << endl;

    changeScore(&st);

    cout << "최종 점수 : " << st.score << endl;

    return 0;
}