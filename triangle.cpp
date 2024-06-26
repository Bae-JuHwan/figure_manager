//-----------------------------------------------------------------------------------
// Triangle.cpp
//
// 2023. 11. 19			by Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "triangle.h"

bool Triangle::관찰{ false };

Triangle::Triangle()
	: p1(), p2(), p3()
{
	if (관찰)
		std::cout << "Triangle()이 생성되었습니다" << '\n';
};

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
	: p1(a), p2(b), p3(c)
{
	if (관찰)
		std::cout << "Triangle(const Point& a, const Point& b, const Point& c)이 생성되었습니다" << '\n';
};

Triangle::Triangle(const Triangle& other)
	: p1(other.p1), p2(other.p2), p3(other.p3)
{
	if (관찰)
		std::cout << "Triangle(const Triangle& other)이 생성되었습니다" << '\n';
}

Triangle::~Triangle()
{
	if (관찰)
		std::cout << "~Triangle()이 소멸되었습니다" << '\n';
}

void Triangle::draw() const
{
	std::cout << "삼각형 - (" << p1.x << "," << p1.y << "), ("
		<< p2.x << "," << p2.y << "), ("
		<< p3.x << "," << p3.y << ")" << '\n';
};