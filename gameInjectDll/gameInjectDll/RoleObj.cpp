#include "stdafx.h"
#include "RoleObj.h"
#include "g_funcAndVar.h"


CRoleObj::CRoleObj()
{
}


CRoleObj::~CRoleObj()
{
}


CBaseStruct& CRoleObj::Init(){

	__try
	{
		//���role���������Եĳ�ʼ��....

	}
	__except (1)
	{
		dbgPrint_String("void CRoleObj::PrintDataMsg()�����쳣������");
	}

	return *this;
}


void CRoleObj::PrintDataMsg()
{
	Init();

	//dbgPrint_String("RoleName = %s , RoleHp = %d , RoleMp = %d", );
	return;
}