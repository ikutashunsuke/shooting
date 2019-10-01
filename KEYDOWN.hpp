#pragma once
#include"DxLib.h"

class KEYDOWN
{
private:
	static char AllKeyState[256];

public:
	static VOID KeyDownUpdate(VOID);

	BOOL IsKeyDown(int);
public:
	KEYDOWN();
	virtual ~KEYDOWN();
};