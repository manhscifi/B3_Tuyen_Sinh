#pragma once
#include"ThiSinh.h"

class KhoiA :public ThiSinh
{
private:
	string toan = "Toan";
	string ly = "Vat ly";
	string hoa = "Hoa hoc";
public:
	KhoiA(string sbd, string hoten, string diachi, int uutien);
	void displayTS();
	~KhoiA() {}
};