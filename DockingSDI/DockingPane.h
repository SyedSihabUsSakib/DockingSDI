#pragma once
#include <BCGPDockingControlBar.h>
#include "DockDlg.h"
class CDockingPane :
    public CBCGPDockingControlBar
{
public:
    DECLARE_MESSAGE_MAP()
        afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
        CDockDlg m_dlg;
        afx_msg void OnSize(UINT nType, int cx, int cy);
};

