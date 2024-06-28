// DockingSDIDoc.cpp : implementation of the CDockingSDIDoc class
//

#include "stdafx.h"
#include "DockingSDI.h"

#include "DockingSDIDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDockingSDIDoc

IMPLEMENT_DYNCREATE(CDockingSDIDoc, CDocument)

BEGIN_MESSAGE_MAP(CDockingSDIDoc, CDocument)
END_MESSAGE_MAP()


// CDockingSDIDoc construction/destruction

CDockingSDIDoc::CDockingSDIDoc()
{
	// TODO: add one-time construction code here

}

CDockingSDIDoc::~CDockingSDIDoc()
{
}

BOOL CDockingSDIDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

// CDockingSDIDoc serialization

void CDockingSDIDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CDockingSDIDoc diagnostics

#ifdef _DEBUG
void CDockingSDIDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDockingSDIDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDockingSDIDoc commands
