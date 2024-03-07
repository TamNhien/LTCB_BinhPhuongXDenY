#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Nhap so nguyen x: "; cin >> x;
    cout << "Nhap so nguyen y: "; cin >> y;

    int sum = 0;
    for (int i = x; i <= y; ++i) {
        sum += i * i;
    }
    cout << "Tong binh phuong cac so tu " << x << " den " << y << " la: " << sum << endl;
    return 0;
}
