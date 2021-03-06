#pragma once
class VECTOR2
{
public:
	VECTOR2();
	VECTOR2(int x, int y);	// ψt«Ίέ½ΔΧΈΐ°
	VECTOR2(int x_y);		// ψt«Ίέ½ΔΧΈΐ°

	~VECTOR2();

	int x;
	int y;

	//γόZq
	VECTOR2& operator = (const VECTOR2& vec);

	//Y¦Zq
	int& operator[](int i);

	//δrZq
	bool operator==(const VECTOR2& vec) const;
	bool operator!=(const VECTOR2& vec) const;
	bool operator<=(const VECTOR2 & vec) const;
	bool operator<(const VECTOR2 & vec) const;


	//PZq
	VECTOR2& operator+=(const VECTOR2& vec);
	VECTOR2& operator-=(const VECTOR2& vec);
	VECTOR2& operator*=(int i);
	VECTOR2& operator/=(int i);

	VECTOR2 operator+()const;
	VECTOR2 operator-()const;
};

// xNgΜZ
//VECTOR2+VECTOR2
VECTOR2 operator+(const VECTOR2& vec1, const VECTOR2& vec2);
// VECTOR2-VECTOR2
VECTOR2 operator-(const VECTOR2& vec1, const VECTOR2& vec2);
// VECTOR2*int
VECTOR2 operator*(const VECTOR2& vec, int i);
// int*VECTOR2
VECTOR2 operator*(int i, const VECTOR2& vec);
// VECTOR2/int
VECTOR2 operator/(const VECTOR2& vec, int i);
// VECTOR2/int
VECTOR2 operator%(const VECTOR2& vec, int i);

