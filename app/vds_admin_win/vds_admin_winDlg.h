
// vds_admin_winDlg.h : ���� ���������
//

#pragma once


// ���������� ���� Cvds_admin_winDlg
class Cvds_admin_winDlg : public CPropertyPage
{
// ��������
public:
	Cvds_admin_winDlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VDS_ADMIN_WIN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
  afx_msg void OnBnClickedRadio2();
  virtual BOOL OnSetActive();
};
