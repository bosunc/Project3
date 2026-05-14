#include <iostream>
using namespace std;

struct BigData {
    int arr[3];
};

void test(BigData* data) {

    cout << "함수 내부 주소 : " << data << endl;

    data->arr[0] = 999;
}

int main() {

    BigData d = { 1, 2, 3 };

    cout << "main의 주소 : " << &d << endl;

    test(&d);

    cout << d.arr[0] << endl;

    return 0;
}