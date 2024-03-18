//-----------------------------------------------------------------------------------
// Triangle.cpp
//
// 2023. 11. 19			by Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "triangle.h"

bool Triangle::����{ false };

Triangle::Triangle()
	: p1(), p2(), p3()
{
	if (����)
		std::cout << "Triangle()�� �����Ǿ����ϴ�" << '\n';
};

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
	: p1(a), p2(b), p3(c)
{
	if (����)
		std::cout << "Triangle(const Point& a, const Point& b, const Point& c)�� �����Ǿ����ϴ�" << '\n';
};

Triangle::Triangle(const Triangle& other)
	: p1(other.p1), p2(other.p2), p3(other.p3)
{
	if (����)
		std::cout << "Triangle(const Triangle& other)�� �����Ǿ����ϴ�" << '\n';
}

Triangle::~Triangle()
{
	if (����)
		std::cout << "~Triangle()�� �Ҹ�Ǿ����ϴ�" << '\n';
}

void Triangle::draw() const
{
	std::cout << "�ﰢ�� - (" << p1.x << "," << p1.y << "), ("
		<< p2.x << "," << p2.y << "), ("
		<< p3.x << "," << p3.y << ")" << '\n';
};