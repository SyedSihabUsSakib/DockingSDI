#pragma once
#include "afxdialogex.h"


// CDockDlg dialog

class CDockDlg : public CBCGPDialog
{
	DECLARE_DYNAMIC(CDockDlg)

public:
	CDockDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDockDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
