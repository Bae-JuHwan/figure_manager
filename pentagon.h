#pragma once
//-----------------------------------------------------------------------------------
// Pentagon.h				�ټ� ������ �������� ������ �� �ִ�
//
// 2023. 11. 19				by Wulong
//-----------------------------------------------------------------------------------
#include "point.h"			// Point�� Pentagon���� ���
#include "shape.h"			// Shape�� ��ӹ���

class Pentagon : public Shape
{
	Point p1, p2, p3, p4, p5;

public:
	static bool ����;
public:
	Pentagon();
	Pentagon(const Point&, const Point&, const Point&, const Point&, const Point&);
	Pentagon(const Pentagon&);
	~Pentagon();

	virtual void draw() const override;		// virtual function�� overriding
};