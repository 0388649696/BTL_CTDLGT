#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) {
        cout << "Buoc 1: 0! = 1" << endl;
        return 1;
    } else {
        int result = factorial(n - 1) * n;
	cout << "Buoc " << n << ": " << n << "! = (" << n - 1 << "!) * " << n << " = " << result << endl;
        return result;
    }
}

int main() {
    int n;
    cout << "Nhap mot so nguyen n: ";
    cin >> n;

    if (n < 0) {
        cout << "Giai thua khong duoc dinh nghia cho so am!" << endl;
    } else {
        cout << "Tinh giai thua cua " << n << ":" << endl;
        int result = factorial(n);
        cout << "Giai thua cua " << n << " la: " << result << endl;
    }

    return 0;
}
