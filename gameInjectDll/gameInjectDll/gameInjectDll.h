// gameInjectDll.h : gameInjectDll DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CgameInjectDllApp
// �йش���ʵ�ֵ���Ϣ������� gameInjectDll.cpp
//

class CgameInjectDllApp : public CWinApp
{
public:
	CgameInjectDllApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
