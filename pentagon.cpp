//-----------------------------------------------------------------------------------
// Pentagon.cpp
//
// 2023. 11. 19			by Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "pentagon.h"

bool Pentagon::����{ false };

Pentagon::Pentagon()
	: p1(), p2(), p3(), p4(), p5()
{
	if (����)
		std::cout << "Pentagon()�� �����Ǿ����ϴ�" << '\n';
};

Pentagon::Pentagon(const Point& a, const Point& b, const Point& c, const Point& d, const Point& e)
	: p1(a), p2(b), p3(c), p4(d), p5(e)
{
	if (����)
		std::cout << "Pentagon(const Point& a, const Point& b, const Point& c, const Point& d, const Point& e)�� �����Ǿ����ϴ�" << '\n';
};

Pentagon::Pentagon(const Pentagon& other)
	: p1(other.p1), p2(other.p2), p3(other.p3), p4(other.p4), p5(other.p5)
{
	if (����)
		std::cout << "Pentagon(const Pentagon& other)�� �����Ǿ����ϴ�" << '\n';
}

Pentagon::~Pentagon()
{
	if (����)
		std::cout << "~Pentagon()�� �Ҹ�Ǿ����ϴ�" << '\n';
}

void Pentagon::draw() const
{
	std::cout << "������ - (" << p1.x << "," << p1.y << "), ("
		<< p2.x << "," << p2.y << "), ("
		<< p3.x << "," << p3.y << "), (" << p4.x << "," << p4.y 
		<< "), (" << p5.x << ", " << p5.y << ")" << '\n';
};