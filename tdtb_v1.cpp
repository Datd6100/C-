#include <iostream>
using namespace std;

int main() {
    int shs;
    cout<<"So luong hoc sinh:";
    cin>>shs;
    
    float dtb[shs];
    int sldtx=4;
    int hsghk=2;
    int hschk=3;
    float tbln=0;
    int ttbln[shs];
    int sltbln=0;
    
    cout<<"\n===Nhap diem hoc sinh===\n\n";
    for (int i = 0; i < shs; i++){
    float tdtx=0;
    float dtx[sldtx];
    cout<<"____Hoc Sinh "<<i+1<<"____"<<endl;
    for (int l = 0; l < sldtx; l++){
    cout<<"Diem thuong xuyen so "<<l+1<<": ";
    cin>>dtx[l];
    tdtx+=dtx[l];
    }
    float dhk[2];
    cout<<"Diem giua ky:";
    cin>>dhk[0];
    cout<<"Diem cuoi ky:";
    cin>>dhk[1];
    cout<<endl;
    dtb[i]=(tdtx+(dhk[0]*hsghk)+(dhk[1]*hschk))/(sldtx+hsghk+hschk);
    }
     cout<<"\n===Diem Trung binh===\n\n";
    for (int i = 0; i < shs; i++){
    cout<<"hoc sinh "<<i+1<<" la: "<<dtb[i];
    cout<<endl;
    
    }
    cout<<"\n===hoc sinh cho diem trung binh lon nhat===\n\n";
    for (int i = 0; i < shs; i++){
    if ( dtb[i]>tbln ){tbln=dtb[i];}
    }
    for (int i = 0; i < shs; i++){
    if ( dtb[i]==tbln ){
    ttbln[sltbln]=i+1;
    sltbln++;
    }
    }
    cout<<"___co "<<sltbln<<" hoc sinh___\n";
    for (int i = 0; i < sltbln; i++){
    cout<<"hoc sinh "<<ttbln[i]<<" diem trung binh là: "<<tbln<<endl;
    }
    return 0;
}