#include <iostream>
using namespace std;
int BINARY_SEARCH(int k[], int n, int X) {
    int l = 0;
    int r = n - 1;     
    while (l <= r) {         
        int m = (l + r) / 2;  
        if (X < k[m]) { 
            r = m - 1;       
        } else if (X > k[m]) {  
            l = m + 1; 
        } else { 
            return m + 1;
        }
    }
    return 0; // Khong tim thay
}

int main() {
    int n, X;
    cout << "Nhap so phan tu trong mang (sap xep tang): ";
    cin >> n;
    int k[n];
    cout << "Nhap " << n << " phan tu theo thu tu tang dan: ";
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    cout << "Nhap gia tri can tim: ";
    cin >> X;
    int result = BINARY_SEARCH(k, n, X);
    if (result == 0) {
        cout << "Khong tim thay " << X << " trong mang." << endl;
    } else {
        cout << "Tim thay " << X << " tai vi tri " << result << "." << endl;
    }

    return 0;
}
