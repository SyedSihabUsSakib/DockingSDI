#include "stdafx.h"
#include "DockingPane.h"
#include "resource.h"
BEGIN_MESSAGE_MAP(CDockingPane, CBCGPDockingControlBar)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()


int CDockingPane::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CBCGPDockingControlBar::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	m_dlg.Create(IDD_DIALOG1, this);
	m_dlg.ShowWindow(SW_SHOW);

	return 0;
}


void CDockingPane::OnSize(UINT nType, int cx, int cy)
{
	CBCGPDockingControlBar::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
	if (m_dlg.GetSafeHwnd())
	{
		m_dlg.SetWindowPos(NULL, -1, -1, cx, cy, SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
	}
}
