#pragma once


// CMainDataDlg �Ի���

class CMainDataDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMainDataDlg)

public:
	CMainDataDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMainDataDlg();

// �Ի�������
	enum { IDD = IDD_MAIN_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
