#pragma once
class CBaseStruct
{
public:
	CBaseStruct();
	~CBaseStruct();


	virtual void PrintDataMsg() = 0;
	virtual CBaseStruct& Init() = 0;


};

