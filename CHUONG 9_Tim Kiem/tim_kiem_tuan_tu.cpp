#include <iostream>
using namespace std;
int SEQUEN_SEARCH(int k[], int n, int X) {
    int i = 0;
    k[n] = X;  
    while (k[i] != X) {
        i = i + 1;
    }
    if (i == n) {
        return 0;
    } else {
        return i + 1;
    }
}

int main() {
    int n, X;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    int k[n + 1];
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    cout << "Nhap gia tri can tim: ";
    cin >> X;
    int result = SEQUEN_SEARCH(k, n, X);
    if (result == 0) {
        cout << "Khong tim thay " << X << " trong mang." << endl;
    } else {
        cout << "Tim thay " << X << " tai vi tri " << result << "." << endl;
    }

    return 0;
}
