#pragma once
#include"ThiSinh.h"

class KhoiC :public ThiSinh
{
private:
	string su = "Lich su";
	string van = "Ngu van";
	string dia = "Dia ly";
public:
	KhoiC(string sbd, string hoten, string diachi, int uutien);
	void displayTS();
	~KhoiC() {}
};
