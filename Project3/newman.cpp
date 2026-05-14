#include <iostream>
using namespace std;

int main() {
    int a, b;

    for (int i = 0; i < 5; i++) {
        cin >> a >> b;

        if (a > b)
            cout << a << endl;
        else
            cout << b << endl;
    }

    return 0;
}
