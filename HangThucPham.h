#ifndef HANGTHUCPHAM_H
#define HANGTHUCPHAM_H
#include"HangHoa.h"

class HangThucPham:public HangHoa
{
protected:
	string NgaySX;
	string HanSD;
	string NhaCC;
public:
	HangThucPham();
	HangThucPham(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon, string NgaySX, string HanSD, string NhaCC);
	void SetNgaySX(string NgaySX);
	void SetHanSD(string HanSD);
	void SetNhaCC(string NhaCC);
	string GetNgaySX();
	string GetHanSD();
	string GetNhaCC();
	void XuatTT();
};

#endif // !HANGTHUCPHAM_H



