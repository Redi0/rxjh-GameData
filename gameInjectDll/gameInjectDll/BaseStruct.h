#pragma once

/*
	所有功能和属性类的基类
	Time：2015年8月21日14:02:45
*/
class CBaseStruct
{
public:
	CBaseStruct();
	~CBaseStruct();


	virtual void PrintDataMsg() = 0;

protected:

	virtual CBaseStruct& Init() = 0;


};

