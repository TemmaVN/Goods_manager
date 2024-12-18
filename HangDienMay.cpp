#include "HangDienMay.h"

HangDienMay::HangDienMay()
{
	this->CongSuat = 0;
	this->TGBaoHanh = "0/0/0";
	this->ChungLoai = "";
}

HangDienMay::HangDienMay(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon, string TGBaoHanh, float CongSuat,string ChungLoai ):HangHoa(MaHang, TenHang, SoLgTon, DonGia, TriGiaTon)
{
	this->CongSuat = CongSuat;
	this->TGBaoHanh = TGBaoHanh;
	this->ChungLoai = ChungLoai;
}

void HangDienMay::SetCS(float CongSuat)
{
	this->CongSuat = CongSuat;
}

void HangDienMay::SetTGBH(string TGBaoHanh)
{
	this->TGBaoHanh = TGBaoHanh;
}

void HangDienMay::SetCL(string ChungLoai)
{
	this->ChungLoai = ChungLoai;
}

string HangDienMay::GetTGBH()
{
	return this->TGBaoHanh;
}

float HangDienMay::GetCS()
{
	return this->CongSuat;
}

string HangDienMay::GetCL()
{
	return this->ChungLoai;
}

void HangDienMay::XuatTT()
{
	cout << "Cac thong tin cua hang dien may la : " << endl;
	cout << "Chung loai cua hang la : " << this->ChungLoai << endl;
	XuatTTHH();
	cout << "Cong suat la : " << this->CongSuat << " kW " << endl;
	cout << "Thoi gian bao hanh la : " << this->TGBaoHanh << endl;

}
