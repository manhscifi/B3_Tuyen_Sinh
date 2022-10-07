#include "TuyenSinh.h"

void TuyenSinh::addTS(string sbd, ThiSinh*& ts)
{
	DanhSachThiSinh.insert({ sbd, ts });
}

void TuyenSinh::displayTS()
{
	if (DanhSachThiSinh.empty())
	{
		cout << "Danh sanh rong.\n\n";
	}
	else
	{
		int count = 1;
		for (auto i = DanhSachThiSinh.begin(); i != DanhSachThiSinh.end(); ++i)
		{
			cout << "STT: " << count << endl;
			i->second->displayTS();
			count++;
		}
		cout << "\n\n";
	}
}

int TuyenSinh::initMenu()
{
	char choice;
	cout << "TUYEN SINH\n";
	cout << "Enter 1: Them thi sinh\n";
	cout << "Enter 2: Hien thi thong tin\n";
	cout << "Enter 3: Tim theo so bao danh\n";
	cout << "Enter 4: Thoat\n\n";
	cin >> choice;
	return choice;
}

ThiSinh*& TuyenSinh::insert()
{
	char s;
	cout << "THEM THI SINH\n";
	cout << "Enter a: Them TS KHOI A\n";
	cout << "Enter b: Them TS KHOI B\n";
	cout << "Enter c: Them TS KHOI C\n\n";
	cin >> s;
	string sbd, hoten, diachi;
	int uutien;

	static ThiSinh* thisinh;
	switch (s)
	{
	case 'a':
		cout << "Enter SBD: "; cin.ignore(); getline(cin, sbd);
		cout << "Enter HO TEN: "; cin.ignore(); getline(cin, hoten);
		cout << "Enter DIA CHI: "; cin.ignore(); getline(cin, diachi);
		cout << "Enter MUC UU TIEN: "; cin >> uutien;
		thisinh = new KhoiA(sbd, hoten, diachi, uutien);
		cout << "\n";
		break;
	case 'b':
		cout << "Enter SBD: "; cin.ignore(); getline(cin, sbd);
		cout << "Enter HO TEN: "; cin.ignore(); getline(cin, hoten);
		cout << "Enter DIA CHI: "; cin.ignore(); getline(cin, diachi);
		cout << "Enter MUC UU TIEN: "; cin >> uutien;
		thisinh = new KhoiB(sbd, hoten, diachi, uutien);
		cout << "\n";
		break;
	case 'c':
		cout << "Enter SBD: "; cin.ignore(); getline(cin, sbd);
		cout << "Enter HO TEN: "; cin.ignore(); getline(cin, hoten);
		cout << "Enter DIA CHI: "; cin.ignore(); getline(cin, diachi);
		cout << "Enter MUC UU TIEN: "; cin >> uutien;
		thisinh = new KhoiC(sbd, hoten, diachi, uutien);
		cout << "\n";
		break;
	default:
		cout << "Invalid." << endl;
		break;
	}
	return thisinh;
}

void TuyenSinh::searchbySBD()
{
	string sbd;
	cout << "Nhap so bao danh: ";
	cin.ignore();
	getline(cin, sbd);
	int count = 0, c = 0;
	for (auto i = DanhSachThiSinh.begin(); i != DanhSachThiSinh.end(); ++i)
	{
		string _sbd = i->second->getSBD();
		if (_sbd == sbd)
		{
			cout << "STT: " << count + 1 << endl;
			i->second->displayTS();
			c++;
			break;
		}
		count++;
	}

	if (!c)
	{
		cout << "Khong tim thay." << endl;
	}
	cout << "\n\n";
}

void TuyenSinh::esc()
{
	exit(0);
}