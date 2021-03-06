// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#pragma once

#include "afxcontrolbarutil.h"

#ifdef _AFX_PACKING
#pragma pack(push, _AFX_PACKING)
#endif

#ifdef _AFX_MINREBUILD
#pragma component(minrebuild, off)
#endif

class CMFCAcceleratorKey : public CObject
{
public:
	CMFCAcceleratorKey();
	CMFCAcceleratorKey(LPACCEL lpAccel);
	virtual ~CMFCAcceleratorKey();

// Operations:
public:
	void Format(CString& str) const;

protected:
	void AddVirtKeyStr(CString& str, UINT uiVirtKey, BOOL bLast = FALSE) const;

// Atttributes:
public:
	void SetAccelerator(LPACCEL lpAccel)
	{
		m_lpAccel = lpAccel;
	}

protected:
	LPACCEL m_lpAccel;
};

#ifdef _AFX_MINREBUILD
#pragma component(minrebuild, on)
#endif

#ifdef _AFX_PACKING
#pragma pack(pop)
#endif
