// gameInjectDll.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "gameInjectDll.h"
#include "MainDataDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ��  ����ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CgameInjectDllApp

BEGIN_MESSAGE_MAP(CgameInjectDllApp, CWinApp)
END_MESSAGE_MAP()


// CgameInjectDllApp ����

CgameInjectDllApp::CgameInjectDllApp()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CgameInjectDllApp ����

CgameInjectDllApp theApp;


// CgameInjectDllApp ��ʼ��

CMainDataDlg *g_mainDlg = nullptr;

DWORD WINAPI ThreadFunc(LPVOID lpram){


	g_mainDlg = new CMainDataDlg;
	g_mainDlg->DoModal();
	delete g_mainDlg;
	FreeLibraryAndExitThread(theApp.m_hInstance, 1);

	return TRUE;

}


BOOL CgameInjectDllApp::InitInstance()
{
	CWinApp::InitInstance();

	::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ThreadFunc, NULL, NULL, NULL);
	return TRUE;
}
