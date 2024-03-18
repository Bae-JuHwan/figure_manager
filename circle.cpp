//-----------------------------------------------------------------------------------
// Circle.cpp
//
// 2023. 11. 19			bu Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include "circle.h"

bool Circle::관찰{ false };

Circle::Circle()
	: center(), rad(0.0)
{
	if (관찰)
		std::cout << "Circle()이 생성되었습니다" << '\n';
}
Circle::Circle(const Point& c, double r)
:center(c), rad(r)
{
	if (관찰)
		std::cout << "Circle(const Point& c, double r)이 생성되었습니다" << '\n';
}

// 복사생성자를 프로그램할 이유가 있다면 멤버변수의 값을 복사해야한다.
// 복사생성자를 프로그램하면서 아무것도 하지 않으면 멤버변수는 복사되지 않는다.

Circle::Circle(const Circle& other)
	: center(other.center), rad(other.rad)
{
	if (관찰)
		std::cout << "Circle(const Circle& other)가 생성되었습니다" << '\n';
}

Circle::~Circle()
{
	if (관찰)
		std::cout << "~Circle()이 소멸되었습니다" << '\n';
}

void Circle::draw() const
{
	// 그림을 그리는 대신 문자로 정보를 출력한다
	std::cout << "원 - 중심점(" << center.x << "," << center.y
		<< ") 반지름" << rad << '\n';
};