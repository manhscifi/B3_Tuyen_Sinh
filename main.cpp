#include"TuyenSinh.h"

int main()
{
	TuyenSinh ts;
	ThiSinh* thisinh;
	while (true)
	{
		int c = ts.initMenu();
		switch (c)
		{
		case '1':
			thisinh = ts.insert();
			ts.addTS(thisinh->getSBD(), thisinh);
			break;
		case '2':
			ts.displayTS();
			break;
		case '3':
			ts.searchbySBD();
			break;
		case'4':
			ts.esc();
			break;
		default:
			break;
		}
	}
	delete thisinh;
	return 0;
}