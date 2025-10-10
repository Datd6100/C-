#include <iostream>
using namespace std;

int main() {
    int n;
    const int muc_luong = 100000; 
    cout << "Nhap so nguoi can tinh luong: ";
    cin >> n;

    float luong[n]; 
    int gio;

    
    for (int i = 0; i < n; i++) {
        cout << "Nhap so gio lam viec cua nhan vien " << i + 1 << ": ";
        cin >> gio;

        if (gio <= 40)
            luong[i] = muc_luong * gio;
        else
            luong[i] = (muc_luong * 40) + ((gio - 40) * muc_luong * 1.5);
    }

    
    cout << "\n=== DANH SACH LUONG NHAN VIEN ===\n";
    cout << fixed ;
    for (int i = 0; i < n; i++) {
        cout << "Nhan vien " << i + 1 << ": " << luong[i] << endl;
    }

    return 0;
}