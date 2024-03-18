#pragma once
//-----------------------------------------------------------------------------------
// Circle.h				�߽����� ��ǥ�� ���������� ���� ������ �� �ִ�.
//						(�ٸ� ������� ���� ������ �� �� �ִ�)
//
// 2023. 11. 19			by Wulong
//-----------------------------------------------------------------------------------
#include "point.h"
#include "shape.h"

// ��������� ���� �� include ��ſ� ������ ���� ���漱��(forward declaration)�� �� �� �� �ִ�
// struct Point;
// class Shape;

class Circle : public Shape
{
	Point center;					// �߽����� ��ǥ
	double rad;						// ������

public:
	static bool ����;
public:
	Circle();
	Circle(const Point&, double);
	Circle(const Circle&);			// ���� ���縦 �� �ʿ䰡 ���ٸ� ���α׷��Ӱ� ��������ڸ�
									// ���α׷��� �ʿ�� ����.
									// ���� � ������ ���α׷��ؾ� �Ѵٸ� �޸𸮸� �����ϰ�
									// �ڵ��ؾ� �Ѵ�.=

	// �� ������ ���� �ٰ� ���� �����Ͽ� ��ġ�� �� �ִ�
	// Circle(const Circle&) = default;
	~Circle();						// �Ҹ��ڸ� ���α׷��� �ʿ䰡 ���ٴ� ���� �����غ���

	virtual void draw() const override;
};