#pragma once
#include"ThiSinh.h"

class KhoiB :public ThiSinh
{
private:
	string toan = "Toan";
	string sinh = "Sinh hoc";
	string hoa = "Hoa hoc";
public:
	KhoiB(string sbd, string hoten, string diachi, int uutien);
	void displayTS();
	~KhoiB() {}
};