#pragma once
#include "BaseStruct.h"
class CRoleObj :
	public CBaseStruct
{
public:
	CRoleObj();
	~CRoleObj();
public:
	//�Լ�����ĺ����ӿ�
	virtual void PrintDataMsg();
protected:

	virtual CBaseStruct& Init();
	

private:
	//��������������� ƫ�Ƶ�


};

