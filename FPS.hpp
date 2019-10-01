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
	//コンストラクタ
	//引数：ｉｎｔ：ＦＰＳ値
	FPS(int);
	VOID Wait(VOID);

	VOID Update(VOID);

	//FPSの値を表示する
	VOID Draw(int, int);

	int Getvalue(VOID)

	virtual ~FPS();
};
extern FPS*fps;