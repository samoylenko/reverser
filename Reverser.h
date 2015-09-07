// Reverser.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CReverserApp:
// See Reverser.cpp for the implementation of this class
//

class CReverserApp : public CWinApp
{
public:
	CReverserApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CReverserApp theApp;