#include <iostream>
using namespace std;

void change(int arr[10000]) {

    cout << "함수 내부 주소 : " << arr << endl;

    arr[9999] = 777;
}
//12333
int main() {

    int a[10000] = { 0 };
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    float h;
    float y;
    y - 3.11;
    d = 23;

    cout << y << endl;
    cout << "main 주소 : " << a << endl;
    cout << d << endl;

    change(a);

    cout << a[9999] << endl;

    return 0;
}