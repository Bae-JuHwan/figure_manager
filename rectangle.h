#pragma once
//-----------------------------------------------------------------------------------
// Rectangle.h				대각선에 있는 점 2개로 사각형을 정의할 수 있다
//
// 2023. 11. 19				by Wulong
//-----------------------------------------------------------------------------------
#include "point.h"
#include "shape.h"

class Rectangle : public Shape
{
	Point p1, p2;

public:
	static bool 관찰;
public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	Rectangle(const Rectangle&);
	~Rectangle();

	virtual void draw() const override;
};