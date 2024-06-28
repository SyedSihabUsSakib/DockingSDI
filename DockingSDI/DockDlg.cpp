// DockDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DockingSDI.h"
#include "afxdialogex.h"
#include "DockDlg.h"


// CDockDlg dialog

IMPLEMENT_DYNAMIC(CDockDlg, CBCGPDialog)

CDockDlg::CDockDlg(CWnd* pParent /*=nullptr*/)
	: CBCGPDialog(IDD_DIALOG1, pParent)
{

}

CDockDlg::~CDockDlg()
{
}

void CDockDlg::DoDataExchange(CDataExchange* pDX)
{
	CBCGPDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDockDlg, CBCGPDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CDockDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDockDlg message handlers


void CDockDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	AfxMessageBox(_T("MashAllah!"));
}
