#pragma once
#include"DxLib.h"

class FPS
{
private:
	int value;
	double drawValue;
	DWORD calcStartTime;
	DWORD calcEndTime;
	DWORD flameCount;
	double calcAverage;

public:
	//�R���X�g���N�^
	//�����F�������F�e�o�r�l
	FPS(int);
	VOID Wait(VOID);

	VOID Update(VOID);

	//FPS�̒l��\������
	VOID Draw(int, int);

	int Getvalue(VOID)

	virtual ~FPS();
};
extern FPS*fps;