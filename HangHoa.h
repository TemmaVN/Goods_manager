#ifndef HANGHOA_H
#define HANGHOA_H
#include"Library.h"

class HangHoa
{
protected:
	string MaHang;
	string TenHang;
	int SoLgTon;
	long long DonGia;
	float TriGiaTon;
public:
	HangHoa();
	HangHoa(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon);
	void SetMH(string MaHang);
	void SetTenHang(string TenHang);
	void SetSLT(int SoLgTon);
	void SetDonGia(long long DonGia);
	void SetTGT(float TriGiaTon);
	string GetMaHang();
	string GetTenHang();
	int GetSoLgTon();
	long long GetDonGia();
	float GetTriGiaTon();
	void XuatTTHH();

};
#endif // !HANGHOA_H



