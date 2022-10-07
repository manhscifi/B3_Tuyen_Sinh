#include "ThiSinh.h"

ThiSinh::ThiSinh(string sbd, string hoten, string diachi, int uutien)
{
	_sbd = sbd;
	_hoten = hoten;
	_diachi = diachi;
	_uutien = uutien;
}

void ThiSinh::displayTS()
{
	cout << "So bao danh: " << _sbd << endl;
	cout << "Ho va ten: " << _hoten << endl;
	cout << "Dia chi: " << _diachi << endl;
	cout << "Muc uu tien: " << _uutien << endl;
}

string ThiSinh::getSBD()
{
	return _sbd;
}
