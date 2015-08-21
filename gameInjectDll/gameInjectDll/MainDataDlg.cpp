// MainDataDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "gameInjectDll.h"
#include "MainDataDlg.h"
#include "afxdialogex.h"


// CMainDataDlg 对话框

IMPLEMENT_DYNAMIC(CMainDataDlg, CDialogEx)

CMainDataDlg::CMainDataDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMainDataDlg::IDD, pParent)
{

}

CMainDataDlg::~CMainDataDlg()
{
}

void CMainDataDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMainDataDlg, CDialogEx)
END_MESSAGE_MAP()


// CMainDataDlg 消息处理程序
