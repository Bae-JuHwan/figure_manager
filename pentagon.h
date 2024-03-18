#pragma once
//-----------------------------------------------------------------------------------
// Pentagon.h				다섯 점으로 오각형을 정의할 수 있다
//
// 2023. 11. 19				by Wulong
//-----------------------------------------------------------------------------------
#include "point.h"			// Point를 Pentagon에서 사용
#include "shape.h"			// Shape을 상속받음

class Pentagon : public Shape
{
	Point p1, p2, p3, p4, p5;

public:
	static bool 관찰;
public:
	Pentagon();
	Pentagon(const Point&, const Point&, const Point&, const Point&, const Point&);
	Pentagon(const Pentagon&);
	~Pentagon();

	virtual void draw() const override;		// virtual function을 overriding
};