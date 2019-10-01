#include "image.hpp"


IMAGE::IMAGE(const char*dir, const char *name)
{
	this->FilePath = "";
	this->FileName = "";

	this->Handle = -1;

	this->X = 0;
	this->Y = 0;
	this->Width = 0;
	this->Height = 0;

	this->IsLoad = false;
	this->IsDraw = false;

	std::string LoadfilePath;
	LoadfilePath += dir;
	LoadfilePath += name;

	this->Handle = LoadGraph(LoadfilePath.c_str());

	if (this->Handle == -1)
	{
		std::string ErroeMsg(IMAGE_ERROR_MSG);
		ErroeMsg += TEXT('\n');
		ErroeMsg += LoadfilePath;

		MessageBox(
			NULL,
			ErroeMsg.c_str(),
			TEXT(IMAGE_ERROR_TITLE),
			MB_OK);
		return;
	}
	this->FilePath = LoadfilePath;
	this->FileName = name;

	GetGraphSize(
		this->Handle,
		&this->Width,
		&this->Height
	);
	this->IsLoad = true;
	this->IsDraw = true;

	return;
}

//デストラクタ
IMAGE::~IMAGE()
{
	DeleteGraph(this->Handle);
	return;
}

//ファイル名を取得
std::string IMAGE::GetFileName(void)
{
	return this->FileName;
}

//X位置を設定
void IMAGE::SetX(int numX)
{
	this->X = numX; return;
}

//Y位置を設定
void IMAGE::SetY(int numY)
{
	this->Y = numY; return;
}

//X位置を取得
int IMAGE::GetX(void)
{
	return this->X;
}

//Y位置を取得
int IMAGE::GetY(void)
{
	return this->Y;
}

//幅を取得
int IMAGE::GetWidth(void)
{
	return this->Width;
}

//高さを取得
int IMAGE::GetHeight(void)
{
	return this->Height;
}

//読み込めた？
bool IMAGE::GetIsLoad(void)
{
	return this->IsLoad;
}

//画像を描画
void IMAGE::Draw(void)
{
	if (this->IsDraw == true)
	{
		DrawGraph(this->X, this->Y, this->Handle, TRUE);
	}
	return;
}