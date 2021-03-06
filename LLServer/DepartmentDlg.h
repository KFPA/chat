#pragma once
#include "../Controls/StaticText.h"
#include "../Controls/GlassButton.h"
#include "../Controls/Base_Dlg.h"
#include "LLMysqlOperate.h"

// CDepartmentDlg dialog

class CDepartmentDlg : public CBase_Dlg
{
	DECLARE_DYNAMIC(CDepartmentDlg)

public:
	CDepartmentDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDepartmentDlg();

// Dialog Data
	enum { IDD = IDD_DEPARTMENT_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

protected:
	CTreeCtrl                m_treeDepartment;
	CStaticText              m_staCurNode;
	CStaticText              m_staCurDepartment;
	CEdit                    m_editCurNodeInfo;
	CEdit                    m_editCurDepartmentInfo;
	CGlassButton             m_btnAddDepartment;
	CGlassButton             m_btnDeleteDepartment;

	CImageList               m_ImageList;
protected:
	void                     RefreshTreeCtrl();
	void                     InsertChildItem(HTREEITEM hParent, int nId);
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedBtnAddDepatment();
	afx_msg void OnTvnSelchangedTreeDepartment(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedBtnDeleteDepatment();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
