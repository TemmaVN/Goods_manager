#include "HangHoa.h"

HangHoa::HangHoa()
{
	this->DonGia = 0;
	this->MaHang = "";
	this->TenHang = "";
	this->SoLgTon = 0;
	this->TriGiaTon = 0;
}

HangHoa::HangHoa(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon)
{
	this->MaHang = MaHang;
	this->TenHang = TenHang;
	this->SoLgTon = (SoLgTon >= 0) ? SoLgTon : 0;
	this->DonGia = (DonGia >= 0) ? DonGia : 0;
	this->TriGiaTon = (TriGiaTon >= 0) ? TriGiaTon : 0;
}

void HangHoa::SetMH(string MaHang)
{
	this->MaHang = MaHang;
}

void HangHoa::SetTenHang(string TenHang)
{
	this->TenHang = TenHang;
}

void HangHoa::SetSLT(int SoLgTon)
{
	this->SoLgTon = (SoLgTon >= 0) ? SoLgTon : 0;
}

void HangHoa::SetDonGia(long long DonGia)
{
	this->DonGia = (DonGia >= 0) ? DonGia : 0;
}

void HangHoa::SetTGT(float TriGiaTon)
{
	this->TriGiaTon = (TriGiaTon >= 0) ? TriGiaTon : 0;
}

string HangHoa::GetMaHang()
{
	return this->MaHang;
}

string HangHoa::GetTenHang()
{
	return this->TenHang;
}

int HangHoa::GetSoLgTon()
{
	return this->SoLgTon;
}

long long HangHoa::GetDonGia()
{
	return this->DonGia;
}

float HangHoa::GetTriGiaTon()
{
	return this->TriGiaTon;
}

void HangHoa::XuatTTHH()
{
	cout << "Thong tin cua hang hoa la : " << endl;
	cout << "Ma hang la : " << this->MaHang << endl;
	cout << "Ten Hang la : " << this->TenHang << endl;
	cout << "So luong ton la : " << this->SoLgTon << endl;
	cout << "Hang hoa co gia " << this->DonGia << " $ " << endl;
	cout << "Tri gia ton kho la : " << this->TriGiaTon << endl;
}