#ifndef HANGDIENMAY_H
#define HANGDIENMAY_H
#include"Library.h"
#include"HangHoa.h"

class HangDienMay:public HangHoa
{
protected:
	string TGBaoHanh;
	float CongSuat;
	string ChungLoai;
public:
	HangDienMay();
	HangDienMay(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon, string TGBaoHanh, float CongSuat,string ChungLoai);
	void SetTGBH(string TGBaoHanh);
	void SetCS(float CongSuat);
	void SetCL(string ChungLoai);
	string GetTGBH();
	float GetCS();
	string GetCL();
	void XuatTT();
};

#endif // !HANGDIENMAY_H



