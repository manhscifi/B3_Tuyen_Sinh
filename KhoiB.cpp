#include"KhoiB.h"

KhoiB::KhoiB(string sbd, string hoten, string diachi, int uutien) :ThiSinh(sbd, hoten, diachi, uutien) {}

void KhoiB::displayTS()
{
	ThiSinh::displayTS();
	cout << "Khoi B: " << toan << ", " << hoa << ", " << sinh << endl;
}
