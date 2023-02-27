#include <iostream>
#include <fstream>

using namespace std;

void nt();
void ngt();
void tinh(int date, float chiphio, float giathuoc, float pdichvu);
void sobenh(int date, float chiphio, float giathuoc, float pdichvu, float tongChiPhi);

int main(int argc, char const *argv[])
{
    int BN;
    cout << "Benh nhan la: \n1: Benh nhan noi tru. \n2: Benh nhan ngoai tru.\n";
    cin >> BN;
    switch (BN)
    {
    case 1:
        nt();
        break;
    case 2:
        ngt();
        break;
    default:
        cout << "vui long chon lai!!" << endl;
        main(argc, argv);
    }
    return 0;
}

void nt()
{
    int date;
    float chiphio;
    float giathuoc;
    float pdichvu;

    cout << "So ngay nam vien : ";
    cin >> date;
    cout << "Chi phi / ngay : ";
    cin >> chiphio;
    cout << "Chi phi thuoc : ";
    cin >> giathuoc;
    cout << "Phi dich vu benh vien : ";
    cin >> pdichvu;

    if (date < 0 || chiphio < 0 || giathuoc < 0 || pdichvu < 0)
    {
        cout << "-----------------------------\n";
        cout << "Khong chap nhan so am(-)!";
        cout << "\n-----------------------------\n";
        nt();
    }
    else tinh(date, chiphio, giathuoc, pdichvu);
}

void ngt()
{
    float giathuoc;
    float pdichvu;

    cout << "Chi phi thuoc : ";
    cin >> giathuoc;
    cout << "Phi dich vu benh vien : ";
    cin >> pdichvu;

    if (giathuoc < 0 || pdichvu < 0)
    {

        cout << "-----------------------------\n";
        cout << "Khong chap nhan so am(-)!";
        cout << "\n-----------------------------\n";
        ngt();
    }
    else tinh(0, 0, giathuoc, pdichvu);
}

void tinh(int date, float chiphio, float giathuoc, float pdichvu)
{
    float tongChiPhi = chiphio * date + giathuoc + pdichvu;
    cout << "-----------------------------\n";
    cout << "tong chi phi phai tra: " << tongChiPhi << "\n\n";
    cout << "   Da in vao bao cao!!";
    sobenh(date, chiphio, giathuoc, pdichvu, tongChiPhi);
}

void sobenh(int date, float chiphio, float giathuoc, float pdichvu, float tongChiPhi)
{
    ofstream fileOutput("sobenh.txt");
    if (date == 0 && chiphio == 0)
    {
        fileOutput << "---Bệnh nhân ngoại trú!---\n";
        fileOutput << "Số tiền thuốc: " << giathuoc << "\n";
        fileOutput << "Số tiền dịch vụ khám bệnh: " << pdichvu << "\n";
        fileOutput << "-----------------------------\n ";
        fileOutput << "Tổng chi phí phải trả: " << tongChiPhi << "\n";
    }
    else
    {

        fileOutput << "---Bệnh nhân nội trú!---\n";
        fileOutput << "Số ngày nằm viện: " << date << "\n";
        fileOutput << "Chi phí nằm viện/ngày: " << chiphio << "\n";
        fileOutput << "Số tiền thuốc: " << giathuoc << "\n";
        fileOutput << "Số tiền dịch vụ khám bệnh: " << pdichvu << "\n";
        fileOutput << "-----------------------------\n ";
        fileOutput << "Tổng chi phí phải trả: " << tongChiPhi << "\n";
    }
    fileOutput.close();
}