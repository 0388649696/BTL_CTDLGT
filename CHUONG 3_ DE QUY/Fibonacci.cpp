//K225480106070
#include <iostream>
using namespace std;
int fibonacci_n(int n) {
    if (n <= 1) {
        cout << "Buoc 1: F(" << n << ") = " << n << endl;
        return n;
    }   
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;   
    cout << "Buoc 1: F(0) = 0" << endl;
    cout << "Buoc 2: F(1) = 1" << endl;   
    for (int i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
        cout << "Buoc " << i + 1 << ": F(" << i << ") = " << f[i] << " (F(" << i - 1 << ") + F(" << i - 2 << "))" << endl;
    }
    return f[n];
}

int main() {
    int n;
    cout << "Nhap so n de tinh so Fibonacci thu n: ";
    cin >> n;
    if (n < 0) {
        cout << "So Fibonacci khong duoc dinh nghia cho so am!" << endl;
    } else {
        cout << "Ket qua: F(" << n << ") = " << fibonacci_n(n) << endl;
    }
    return 0;
}
