#pragma once
#include "BaseStruct.h"


/*
���������࣬��Ҫ��װ�������һЩ���ԣ��Լ�һЩ�ӿں���\
Time: 2015��8��21��14:02:09


*/

class CRoleObj :
	public CBaseStruct
{
public:
	CRoleObj();
	~CRoleObj();
public:
	//�Լ�����ĺ����ӿ�
	virtual void PrintDataMsg();
	virtual CBaseStruct& Init();
	

private:
	//��������������� ƫ�Ƶ�


};

