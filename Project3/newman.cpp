#include <iostream>
using namespace std;

void change(int arr[10000]) {

    cout << "함수 내부 주소 : " << arr << endl;

    arr[9999] = 777;
}
//
int main() {

    int a[10000] = { 0 };

    cout << "main 주소 : " << a << endl;

    change(a);

    cout << a[9999] << endl;

    return 0;
}