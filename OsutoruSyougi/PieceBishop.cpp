#include "PieceBishop.h"



PieceBishop::PieceBishop()
{
	pos = VECTOR2{ 1, 1 };
	offset = { (SCR_SIZR_X / 2) - (PIECE_SIZE / 2) * 9, (SCR_SIZR_Y / 2) - (PIECE_SIZE / 2) * 9 };
}


PieceBishop::~PieceBishop()
{
}

bool PieceBishop::SetPos(VECTOR2 pos)
{
	this->pos = pos;
	return true;
}

std::vector<VECTOR2> PieceBishop::isMove()
{
	std::vector<VECTOR2> Data;
	Data.push_back(VECTOR2(-1, -1));
	Data.push_back(VECTOR2(1, -1));
	Data.push_back(VECTOR2(-1, 1));
	Data.push_back(VECTOR2(1, 1));
	return  Data;
}

VECTOR2 PieceBishop::GetPos()
{
	return pos;
}

void PieceBishop::Draw()
{
	DrawPos = (pos * PIECE_SIZE) + offset;
	DrawBox(DrawPos.x + 8, DrawPos.y + 24, DrawPos.x + 56, DrawPos.y + 56, 0xcd853f, true);
	DrawTriangle(DrawPos.x + 8, DrawPos.y + 24, DrawPos.x + 56, DrawPos.y + 24, DrawPos.x + 32, DrawPos.y + 8, 0xcd853f, true);
	DrawString(DrawPos.x + 25, DrawPos.y + 28, "�p", 0, true);
}
