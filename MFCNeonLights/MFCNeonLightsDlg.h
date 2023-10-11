
// MFCNeonLightsDlg.h : header file
//

#pragma once

#include "ColorStaticCtrl.h"

// CMFCNeonLightsDlg dialog
class CMFCNeonLightsDlg : public CDialogEx
{
// Construction
public:
	CMFCNeonLightsDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCNEONLIGHTS_DIALOG };
#endif

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
	CButton buttonOk;
	CString staticText1;
	afx_msg void OnBnClickedOk();
	afx_msg void OnClickedStart();
	ColorStaticCtrl m_staticDraw;
};
