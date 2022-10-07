#include"KhoiA.h"

KhoiA::KhoiA(string sbd, string hoten, string diachi, int uutien) :ThiSinh(sbd, hoten, diachi, uutien) {}

void KhoiA::displayTS()
{
	ThiSinh::displayTS();
	cout << "Khoi A:" << toan << ", " << ly << ", " << hoa << endl;
}

