#include <iostream>
using namespace std;

void changeValue(int* p) {
    *p = 100;
}

int main() {

    int num = 10;

    cout << "변경 전 : " << num << endl;

    changeValue(&num);

    cout << "변경 후 : " << num << endl;

    return 0;
}