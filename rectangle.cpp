//-----------------------------------------------------------------------------------
// Rectangle.cpp
//
// 2023.11. 19				by Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "rectangle.h"

bool Rectangle::����{ false };

Rectangle::Rectangle()
	: p1(), p2()
{
	if (����)
		std::cout << "Rectangle()�� �����Ǿ����ϴ�" << '\n';
};

Rectangle::Rectangle(const Point& a, const Point& b)
	: p1(a), p2(b)
{
	if (����)
		std::cout << "Rectangle(const Point& a, const Point& b)�� �����Ǿ����ϴ�" << '\n';
};

Rectangle::Rectangle(const Rectangle& other)
	: p1(other.p1), p2(other.p2)
{
	if (����)
		std::cout << "Rectangle(const Rectangle& other)�� �����Ǿ����ϴ�" << '\n';
}

Rectangle::~Rectangle()
{
	if (����)
		std::cout << "~Rectangle()�� �Ҹ�Ǿ����ϴ�" << '\n';
}

void Rectangle::draw() const
{
	std::cout << "�簢�� - (" << p1.x << "," << p1.y << "), ("
		<< p2.x << "," << p2.y << ")" << '\n';

};