//-----------------------------------------------------------------------------------
// ����������.cpp
// 
// ã�ƺ��� �˾ƺ� ��
//
//			- ������(Ploymorphism)�̶� �����ΰ�?
//			- C++ ������ ��� �������� �����ϴ°�?
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
		std::cout << "- ���ϴ� ���� �߰�" << '\n';
		std::cout << "\t1. - �ﰢ��" << '\n';
		std::cout << "\t2. - �簢��" << '\n';
		std::cout << "\t3.- ��" << '\n';
		std::cout << "4. - ��ü ������ �׸���" << '\n';
		std::cout << "5. - ���α׷� ������" << '\n';
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
			std::cout << "���α׷��� �����ϴ�" << '\n';

			return 0;
		}
	}
};

		Circle::���� = true;
		Pentagon::���� = true;
		Rectangle::���� = true;
		Triangle::���� = true;

		// �� ���α׷��� ������Ʈ�� Ȯ���ϱ� ���� ���̴�.
		// �ǽ� ������� ������ �ذ��� ����.

		// 1. ���� Ŭ������ ����
		ShapeManager sm(100);			// �ִ� 100���� ������ ������

		// 2. �������� ���� Ŭ������ ������
		sm.insert(new Triangle());
		sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
		sm.insert(new Circle(Point(1.23, 4.56), 7.89));

		for (int i = 0; i < 10; ++i) {
			sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
		}

		sm.insert(new Pentagon(Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4)));

		// 3. �����ϰ� �ִ� ��� ������ �׸�
		sm.draw();
	// �� ���α׷����� �߸��� ���� ã�� �� �ִ°�?
	// �߸��� ���� ��� ã�� �� �ִ°�?
}