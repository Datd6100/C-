#include <iostream>
using namespace std;

int main() {
    int muc_luong, gio;
    float luong;

    cout << "Nhap muc luong theo gio: ";
    cin >> muc_luong;

    cout << "Nhap so gio lam viec: ";
    cin >> gio;

    if (gio <= 40)
        luong = muc_luong * gio;
    else
        luong = (muc_luong * 40) + ((gio - 40) * muc_luong * 1.5);

    cout << "Luong nhan duoc la: " << luong << endl;

    return 0;
}