
// vds_admin_win.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// Cvds_admin_winApp:
// � ���������� ������� ������ ��. vds_admin_win.cpp
//

class Cvds_admin_winApp : public CWinApp
{
public:
	Cvds_admin_winApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern Cvds_admin_winApp theApp;