// DockingSDIDoc.h : interface of the CDockingSDIDoc class
//


#pragma once


class CDockingSDIDoc : public CDocument
{
protected: // create from serialization only
	CDockingSDIDoc();
	DECLARE_DYNCREATE(CDockingSDIDoc)

// Attributes
public:

// Operations
public:

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CDockingSDIDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


