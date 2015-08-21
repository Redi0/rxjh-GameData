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
		//完成role的所有属性的初始化....

	}
	__except (1)
	{
		dbgPrint_String("void CRoleObj::PrintDataMsg()出现异常！！！");
	}

	return *this;
}


void CRoleObj::PrintDataMsg()
{
	Init();

	//dbgPrint_String("RoleName = %s , RoleHp = %d , RoleMp = %d", );
	return;
}