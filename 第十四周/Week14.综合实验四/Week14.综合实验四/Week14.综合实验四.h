
// Week14.综合实验四.h : Week14.综合实验四 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CWeek14综合实验四App:
// 有关此类的实现，请参阅 Week14.综合实验四.cpp
//

class CWeek14综合实验四App : public CWinApp
{
public:
	CWeek14综合实验四App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek14综合实验四App theApp;
