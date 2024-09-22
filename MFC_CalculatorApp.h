
// MFC_CalculatorApp.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCCalculatorAppApp:
// See MFC_CalculatorApp.cpp for the implementation of this class
//

class CMFCCalculatorAppApp : public CWinApp
{
public:
	CMFCCalculatorAppApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCCalculatorAppApp theApp;
