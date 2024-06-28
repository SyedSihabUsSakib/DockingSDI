// DockingSDIView.h : interface of the CDockingSDIView class
//


#pragma once


class CDockingSDIView : public CView
{
protected: // create from serialization only
	CDockingSDIView();
	DECLARE_DYNCREATE(CDockingSDIView)

// Attributes
public:
	CDockingSDIDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDockingSDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnContextMenu(CWnd*, CPoint point);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnNcPaint();
	afx_msg void OnFilePrintPreview();
	afx_msg LRESULT OnPrintClient(WPARAM wp, LPARAM lp);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DockingSDIView.cpp
inline CDockingSDIDoc* CDockingSDIView::GetDocument() const
	{ return reinterpret_cast<CDockingSDIDoc*>(m_pDocument); }
#endif

