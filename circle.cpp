//-----------------------------------------------------------------------------------
// Circle.cpp
//
// 2023. 11. 19			bu Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "circle.h"

bool Circle::����{ false };

Circle::Circle()
	: center(), rad(0.0)
{
	if (����)
		std::cout << "Circle()�� �����Ǿ����ϴ�" << '\n';
}
Circle::Circle(const Point& c, double r)
:center(c), rad(r)
{
	if (����)
		std::cout << "Circle(const Point& c, double r)�� �����Ǿ����ϴ�" << '\n';
}

// ��������ڸ� ���α׷��� ������ �ִٸ� ��������� ���� �����ؾ��Ѵ�.
// ��������ڸ� ���α׷��ϸ鼭 �ƹ��͵� ���� ������ ��������� ������� �ʴ´�.

Circle::Circle(const Circle& other)
	: center(other.center), rad(other.rad)
{
	if (����)
		std::cout << "Circle(const Circle& other)�� �����Ǿ����ϴ�" << '\n';
}

Circle::~Circle()
{
	if (����)
		std::cout << "~Circle()�� �Ҹ�Ǿ����ϴ�" << '\n';
}

void Circle::draw() const
{
	// �׸��� �׸��� ��� ���ڷ� ������ ����Ѵ�
	std::cout << "�� - �߽���(" << center.x << "," << center.y
		<< ") ������" << rad << '\n';
};