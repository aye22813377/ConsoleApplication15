#pragma once
class knig
{
	char* fio;
	int dom;
	int rab;
	int mob;
public:
	knig();
	knig(const char* f, int dom,int rab,int mob);
	knig(const knig& obj);
	void Print();
	void Input();
	~knig();
	char* GetFio() const
	{
		return fio;
	}
	int GetDom() const
	{
		return dom;
	}
	int GetRab() const
	{
		return rab;
	}
	int GetMob() const
	{
		return mob;
	}
	void SetFio(char* f);
	void SetDom(int dom);
	void SetRab(int rab);
	void SetMob(int mob);
};

