
// userfilefind.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CuserfilefindApp:
// �йش����ʵ�֣������ userfilefind.cpp
//

class CuserfilefindApp : public CWinApp
{
public:
	CuserfilefindApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CuserfilefindApp theApp;