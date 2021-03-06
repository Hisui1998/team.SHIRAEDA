#include <memory>
#include "VECTOR2.h"
#include "PieceState.h"

class MouseCtl;
class GameBoard;
class GamePiece;
class PieceTray;

#pragma once
class Player
{
public:
	Player();
	~Player();
	bool Draw(void);

	// ﾌﾟﾚｲﾔｰの管理
	PIECE_ST GetPlayer(void);
	int GetPlayerCnt(void);

	// 自分の駒を押した時の座標の管理
	void SetClickPos(VECTOR2 pos);
	VECTOR2 GetClickPos(void);

	// 移動系の管理
	bool CheckTurn(const MouseCtl & mouseCtl, GameBoard & actBoard);

	bool SetTurnPlayer(bool flag);

private:

	// 押した駒の座標の保存
	VECTOR2 ClickPos = { 0,0 };
	// 押した時の駒のﾌﾗｸﾞ
	bool playerFlag;

	static int playerCnt;

	PIECE_ST state;

	std::unique_ptr <PieceTray> pieceTray;

};

