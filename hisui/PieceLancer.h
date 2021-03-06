#pragma once
#include "GamePiece.h"
class PieceLancer :
	public GamePiece
{
public:
	PieceLancer();
	~PieceLancer();
	bool SetPos(VECTOR2 pos, VECTOR2 Offset = -1);
	VECTOR2 GetPos();
	std::vector<VECTOR2> isMove();
	void Draw();
	bool Endless();
private:
	VECTOR2 pos;
	VECTOR2 offset;
	VECTOR2 DrawPos;
};

