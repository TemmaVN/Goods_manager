#ifndef HANGMAYMAC_H
#define HANGMAYMAC_H
#include"HangHoa.h"

class HangMayMac:public HangHoa
{
protected:
	string NhaSX;
	string NgayNK;
public:
	HangMayMac();
	HangMayMac(string MaHang, string TenHang, int SoLgTon, long long DonGia, float TriGiaTon, string NhaSX, string NgayNK);
	void SetNhaSX(string NhaSX);
	void SetNgayNK(string NgayNK);
	string GetNhaSX();
	string GetNgayNK();
	void XuatTT();
};

#endif // !HANGMAYMAC_H



