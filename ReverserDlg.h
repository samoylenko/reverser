// ReverserDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CReverserDlg dialog
class CReverserDlg : public CDialog
{
// Construction
public:
	CReverserDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_REVERSER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_edtText;
	CString m_strText;
	afx_msg void OnBnClickedBtnreverse();
	afx_msg void OnBnClickedBtncopyall();
	BOOL m_bFiltered;
};
