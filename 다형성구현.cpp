//-----------------------------------------------------------------------------------
// 다형성구현.cpp
// 
// 찾아보고 알아볼 것
//
//			- 다형성(Ploymorphism)이란 무엇인가?
//			- C++ 언어에서는 어떻게 다형성을 구현하는가?
//
// 2023. 11. 19			by Wulong
//-----------------------------------------------------------------------------------
#include <iostream>
#include <random>
#include "point.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "pentagon.h"
#include "ShapeManager.h"

std::default_random_engine dre;
std::uniform_int_distribution<> uid{ 0, 10};

//--------
int main()
//--------
{
	while (true) {
		int num{};

		std::cout << "\tMenu" << '\n';
		std::cout << "- 원하는 도형 추가" << '\n';
		std::cout << "\t1. - 삼각형" << '\n';
		std::cout << "\t2. - 사각형" << '\n';
		std::cout << "\t3.- 원" << '\n';
		std::cout << "4. - 전체 도형을 그리기" << '\n';
		std::cout << "5. - 프로그램 끝내기" << '\n';
		std::cout << '\n';
		std::cin >> num;

		switch (num) {
		case 1: {
			Point point1(uid(dre), uid(dre));
			Point point2(uid(dre), uid(dre));
			Point point3(uid(dre), uid(dre));

			Triangle triangle(point1, point2, point3);

			break;
		}
		case 2: {
			Point point4(uid(dre), uid(dre));
			Point point5(uid(dre), uid(dre));

			Rectangle rectangle(point4, point5);

			break;
		}
		case 3: {
			Point point6(uid(dre), uid(dre));
			double double1(static_cast<double>(num));

			Circle circle(point6, double1);

			break;
		}
		case 4: {
			Point point1(uid(dre), uid(dre));
			Point point2(uid(dre), uid(dre));
			Point point3(uid(dre), uid(dre));

			Triangle triangle(point1, point2, point3);

			Point point4(uid(dre), uid(dre));
			Point point5(uid(dre), uid(dre));

			Rectangle rectangle(point4, point5);

			Point point6(uid(dre), uid(dre));
			double double1(static_cast<double>(num));

			Circle circle(point6, double1);

			triangle.draw();
			rectangle.draw();
			circle.draw();

			break;
		}
		case 5: {
			std::cout << "프로그램을 끝냅니다" << '\n';

			return 0;
		}
	}
};

		Circle::관찰 = true;
		Pentagon::관찰 = true;
		Rectangle::관찰 = true;
		Triangle::관찰 = true;

		// 이 프로그램은 프로젝트를 확인하기 위한 것이다.
		// 실습 순서대로 문제를 해결해 보자.

		// 1. 관리 클래스를 만듦
		ShapeManager sm(100);			// 최대 100개의 도형을 관리함

		// 2. 도형들을 관리 클래스에 삽입함
		sm.insert(new Triangle());
		sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
		sm.insert(new Circle(Point(1.23, 4.56), 7.89));

		for (int i = 0; i < 10; ++i) {
			sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
		}

		sm.insert(new Pentagon(Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4)));

		// 3. 관리하고 있는 모든 도형을 그림
		sm.draw();
	// 이 프로그램에서 잘못된 점을 찾을 수 있는가?
	// 잘못된 점을 어떻게 찾을 수 있는가?
}