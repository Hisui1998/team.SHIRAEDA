#include <Dxlib.h>
#include "MouseCtl.h"
#include <memory>
#include <string>
#include "Player.h"
#include "GameTask.h"
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	std::unique_ptr<MouseCtl> MC = std::make_unique<MouseCtl>();
	std::unique_ptr<Player> player = std::make_unique<Player>();

	SetGraphMode(1080, 720, 32);
	ChangeWindowMode(true);
	SetWindowText("Ostle_Test");
	if (DxLib_Init() == -1)	// DxLibの初期化
	{
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);
	lpGameTask.Run();
	//while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	//{
	//	MC->UpDate();
	//	ClsDrawScreen();
	//	DrawString(0,  0, ("PosX" + std::to_string(MC->GetMousePos().x)).c_str(), 0xffffff);
	//	DrawString(0, 15, ("PosY" + std::to_string(MC->GetMousePos().y)).c_str(), 0xffffff);
	//	DrawBox(540 - 32 * 9, 360 - 32 * 9, 540 + 32 * 9, 360 + 32 * 9, 0xeeaa77, true);
	//	DrawBox(32, 32, 32 + 180, 32 + 180, 0xeeaa77, true);
	//	ScreenFlip();
	//}
	DxLib_End();	// DxLibの終了
	return 0;
}