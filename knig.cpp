#include "knig.h"
#include<iostream>
using namespace std;

knig::knig()
{
	fio = nullptr;
	dom = 0;
	rab = 0;
	mob =0;
}
knig::knig(const char* f, int d,int r,int m)
{
	fio = new char[strlen(f) + 1];
	strcpy_s(fio, strlen(f) + 1, f);
	dom = d;
	rab = r;
	mob = m;
}
knig::knig(const knig& obj)
{
	fio = new char[strlen(obj.fio) + 1];
	strcpy_s(fio, strlen(obj.fio) + 1, obj.fio);
	dom = obj.dom;
	rab = obj.rab;
	mob = obj.mob;
	cout << "Copy constructor\n";
}
void knig::Input()
{
	cout << "Vvedite fio" << endl;
	cin >> fio;
	cout << "Vvedite Domashniy nomer:" << endl;
	cin >> dom;
	cout << "Vvedite Rabochiy nomer:" << endl;
	cin >> rab;
	cout << "Vvedite Mobilniy nomer:" << endl;
	cin >> mob;

}
void knig::Print()
{
	cout << "Fio: " << fio << "\tDomashniy nomer: " << dom << "\t Rabochiy nomer:" << rab << "\tMobilniy nomer" << mob << endl;
}

knig::knig()
{
	delete[] fio;
	cout << "Destructor \n";
}

void knig::SetFio(char* f)
{
	if (fio != nullptr)
	{
		delete[] fio;
	}
	fio = new char[strlen(f) + 1];
	strcpy_s(fio, strlen(f) + 1, f);
}

void knig::SetDom(int d )
{
	dom = d;
}
void knig::SetRab(int r)
{
	rab = r;
}
void knig::SetMob(int m)
{
	mob = m;
}

