//thap ha noi
#include <iostream>
using namespace std;
void HaNoi(int n, int a, int b, int c) {
    if (n == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    HaNoi(n - 1, a, c, b);
    HaNoi(1, a, b, c);
    HaNoi(n - 1, b, a, c);
}

int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    cout << "Cac buoc chuyen dia nhu sau:" << endl;
    HaNoi(n, 1, 2, 3);

    return 0;
}
