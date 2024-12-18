#include "HangThucPham.h"

HangThucPham::HangThucPham()
{
	this->NgaySX = "0/0/0";
	this->HanSD = "0/0/0";
	this->NhaCC = "";
}

HangThucPham::HangThucPham(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon, string NgaySX, string HanSD, string NhaCC) :HangHoa(MaHang, TenHang, SoLgTon, DonGia, TriGiaTon)
{
	this->NgaySX = NgaySX;
	this->HanSD = HanSD;
	this->NhaCC = NhaCC;
}

void HangThucPham::SetNgaySX(string NgaySX)
{
	this->NgaySX = NgaySX;
}

void HangThucPham::SetHanSD(string HanSD)
{
	this->HanSD = HanSD;
}

void HangThucPham::SetNhaCC(string NhaCC)
{
	this->NhaCC = NhaCC;
}

string HangThucPham::GetNgaySX()
{
	return NgaySX;
}

string HangThucPham::GetHanSD()
{
	return HanSD;
}

string HangThucPham::GetNhaCC()
{
	return NhaCC;
}

void HangThucPham::XuatTT()
{
	cout << "Thong tin cua hang thuc pham la : " << endl;
	XuatTTHH();
	cout << "Ngay san xuat la : " << NgaySX << endl;
	cout << "Han su dung la : " << HanSD << endl;
	cout << "Nha cung cap la : " << NhaCC << endl;
}
