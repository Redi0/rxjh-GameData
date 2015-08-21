#pragma once
#include "BaseStruct.h"


/*
人物属性类，主要封装了人物的一些属性，以及一些接口函数\
Time: 2015年8月21日14:02:09


*/

class CRoleObj :
	public CBaseStruct
{
public:
	CRoleObj();
	~CRoleObj();
public:
	//自己定义的函数接口
	virtual void PrintDataMsg();
	virtual CBaseStruct& Init();
	

private:
	//定义人物对象属性 偏移等


};

