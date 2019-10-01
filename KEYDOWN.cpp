#include "KEYDOWN.hpp"

char KEYDOWN::AllKeyState[256];

VOID KEYDOWN::KeyDownUpdate(VOID) {
	char TempKey[256];
	GetHitKeyStateAll(TempKey);

	for (int i = 0; i < 256; i++)
	{
		if (TempKey[i] != 0)
		{
			AllKeyState[i]++;
		}
		else
		{
			AllKeyState[i] = 0;
		}
	}
	return;
	
}

BOOL KEYDOWN::IsKeyDown(int keycode)
{
	if (this->AllKeyState[keycode] != 0)
		return TRUE;
	else
		return FALSE;
}

KEYDOWN::KEYDOWN()
{

}
KEYDOWN::~KEYDOWN()
{

}

extern KEYDOWN*keydown;