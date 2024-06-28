// DockingSDIView.cpp : implementation of the CDockingSDIView class
//

#include "stdafx.h"
#include "DockingSDI.h"

#include "DockingSDIDoc.h"
#include "DockingSDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDockingSDIView

IMPLEMENT_DYNCREATE(CDockingSDIView, CView)

BEGIN_MESSAGE_MAP(CDockingSDIView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_ERASEBKGND()
	ON_WM_NCPAINT()
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDockingSDIView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_MESSAGE(WM_PRINTCLIENT, &CDockingSDIView::OnPrintClient)
END_MESSAGE_MAP()

// CDockingSDIView construction/destruction

CDockingSDIView::CDockingSDIView()
{
	// TODO: add construction code here

}

CDockingSDIView::~CDockingSDIView()
{
}

BOOL CDockingSDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDockingSDIView drawing

void CDockingSDIView::OnDraw(CDC* pDC)
{
	CDockingSDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
	CRect rectClient;
	GetClientRect(rectClient);

	pDC->FillSolidRect(rectClient, CBCGPVisualManager::GetInstance()->GetControlFillColor());
}


// CDockingSDIView printing

void CDockingSDIView::OnFilePrintPreview()
{
	BCGPPrintPreview (this);
}

BOOL CDockingSDIView::OnPreparePrinting(CPrintInfo* pInfo)
{
	return BCGPPreparePrinting(this, pInfo);
}

void CDockingSDIView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDockingSDIView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CDockingSDIView diagnostics

#ifdef _DEBUG
void CDockingSDIView::AssertValid() const
{
	CView::AssertValid();
}

void CDockingSDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDockingSDIDoc* CDockingSDIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDockingSDIDoc)));
	return (CDockingSDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CDockingSDIView message handlers

BOOL CDockingSDIView::OnEraseBkgnd(CDC* /*pDC*/)
{
	return TRUE;
}

LRESULT CDockingSDIView::OnPrintClient(WPARAM wp, LPARAM lp)
{
	if ((lp & PRF_CLIENT) == PRF_CLIENT)
	{
		CDC* pDC = CDC::FromHandle((HDC)wp);
		ASSERT_VALID(pDC);

		OnDraw(pDC);
	}

	return 0;
}

void CDockingSDIView::OnNcPaint()
{
	if (!CBCGPVisualManager::GetInstance()->OnDrawViewBorder(this))
	{
		Default();
	}
}

void CDockingSDIView::OnContextMenu(CWnd*, CPoint point)
{
	if (CBCGPPopupMenu::GetSafeActivePopupMenu() != NULL)
	{
		return;
	}

	theApp.ShowPopupMenu(IDR_CONTEXT_MENU, point, this);
}
