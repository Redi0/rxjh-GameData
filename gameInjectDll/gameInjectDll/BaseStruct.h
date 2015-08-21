#pragma once
class CBaseStruct
{
public:
	CBaseStruct();
	~CBaseStruct();


	virtual void PrintDataMsg() = 0;

protected:

	virtual CBaseStruct& Init() = 0;


};

