#include "HangMayMac.h"

HangMayMac::HangMayMac()
{
	this->NhaSX = "";
	this->NgayNK = "0/0/0";
}

HangMayMac::HangMayMac(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon, string NhaSX, string NgayNK) :HangHoa(MaHang, TenHang, SoLgTon, DonGia, TriGiaTon)
{
	this->NhaSX = NhaSX;
	this->NgayNK = "0/0/0";
}

void HangMayMac::SetNhaSX(string NhaSX)
{
	this->NhaSX = NhaSX;
}

void HangMayMac::SetNgayNK(string NgayNK)
{
	this->NgayNK = NgayNK;
}

string HangMayMac::GetNhaSX()
{
	return this->NhaSX;
}

string HangMayMac::GetNgayNK()
{
	return this->NgayNK;
}

void HangMayMac::XuatTT()
{
	cout << "Cac thong tin cua hang may mac la : " << endl;
	XuatTTHH();
	cout << "Nha san xuat la : " << this->NhaSX << endl;
	cout << "Ngay nhap kho la : " << this->NgayNK << endl;
}