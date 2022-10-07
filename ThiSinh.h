#pragma once
#include<iostream>
using namespace std;

class ThiSinh
{
private:
	string _sbd;
	string _hoten;
	string _diachi;
	int _uutien;
public:
	ThiSinh(string sbd, string hoten, string diachi, int uutien);
	virtual void displayTS();
	string getSBD();
	~ThiSinh() {}
};

