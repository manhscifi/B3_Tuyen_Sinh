#include"KhoiC.h"

KhoiC::KhoiC(string sbd, string hoten, string diachi, int uutien) :ThiSinh(sbd, hoten, diachi, uutien) {}

void KhoiC::displayTS()
{
	ThiSinh::displayTS();
	cout << "Khoi C: " << van << ", " << su << ", " << dia << endl;
}
