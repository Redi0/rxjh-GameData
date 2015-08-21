#pragma once


// CMainDataDlg 对话框

class CMainDataDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMainDataDlg)

public:
	CMainDataDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMainDataDlg();

// 对话框数据
	enum { IDD = IDD_MAIN_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
