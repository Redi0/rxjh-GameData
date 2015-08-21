#pragma once
#include "BaseStruct.h"
class CRoleObj :
	public CBaseStruct
{
public:
	CRoleObj();
	~CRoleObj();
public:
	//自己定义的函数接口
	virtual void PrintDataMsg();
protected:

	virtual CBaseStruct& Init();
	

private:
	//定义人物对象属性 偏移等


};

