#pragma once

/*
	���й��ܺ�������Ļ���
	Time��2015��8��21��14:02:45
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

