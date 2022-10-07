#include"ThiSinh.h"
#include"KhoiA.h"
#include"KhoiB.h"
#include"KhoiC.h"
#include <string>
#include<map>

class TuyenSinh
{
private:
	map<string, ThiSinh*> DanhSachThiSinh;
public:
	void addTS(string sbd, ThiSinh*& ts);
	void displayTS();
	int initMenu();
	ThiSinh*& insert();
	void searchbySBD();
	void esc();
};
