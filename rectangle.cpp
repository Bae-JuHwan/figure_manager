//-----------------------------------------------------------------------------------
// Rectangle.cpp
//
// 2023.11. 19				by Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "rectangle.h"

bool Rectangle::관찰{ false };

Rectangle::Rectangle()
	: p1(), p2()
{
	if (관찰)
		std::cout << "Rectangle()이 생성되었습니다" << '\n';
};

Rectangle::Rectangle(const Point& a, const Point& b)
	: p1(a), p2(b)
{
	if (관찰)
		std::cout << "Rectangle(const Point& a, const Point& b)이 생성되었습니다" << '\n';
};

Rectangle::Rectangle(const Rectangle& other)
	: p1(other.p1), p2(other.p2)
{
	if (관찰)
		std::cout << "Rectangle(const Rectangle& other)이 생성되었습니다" << '\n';
}

Rectangle::~Rectangle()
{
	if (관찰)
		std::cout << "~Rectangle()이 소멸되었습니다" << '\n';
}

void Rectangle::draw() const
{
	std::cout << "사각형 - (" << p1.x << "," << p1.y << "), ("
		<< p2.x << "," << p2.y << ")" << '\n';

};