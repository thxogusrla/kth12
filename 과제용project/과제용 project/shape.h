#ifndef _SHPAE_H
#define _SHPAE_H
#include <iostream>
using namespace std;

// class hierarchy for shapes
//	 CShape
//		+-- CCircle
//		+-- CRect

class CShape {	// abstract shape class 추상 클래스
public:
	CShape(double x = 0.0, double y = 0.0) : m_x(x), m_y(y) { }
	virtual ~CShape() { }	// virtual destructor
	virtual void out(ostream &sout) const
	{
		sout << m_x << ',' << m_y;
	}
	virtual double area() const = 0; // pure virtual function 순수 가상함수.
protected:
	double m_x, m_y;	// position 중심 (x,y)
};

class CCircle : public CShape {	// circle class
public:
	CCircle(double r = 1.0, double x = 0.0, double y = 0.0) :
		CShape(x, y), m_radius(r) { }
	void out(ostream &sout) const
	{
		sout << m_radius << ':'; CShape::out(sout); //반지름과 중심 x ,y를 나타냄.
	}
	double area() const { return 3.14 * m_radius * m_radius; }
protected:
	double m_radius;
};

class CRect : public CShape {	// rectangle class
public:
	CRect(double w = 1.0, double h = 1.0, double x = 0.0,
		double y = 0.0) :
		CShape(x, y), m_width(w), m_height(h) { }
	void out(ostream &sout) const
	{
		sout << m_width << ',' << m_height << ':'; CShape::out(sout);
	}
	double area() const { return m_width * m_height; }
protected:
	double m_width, m_height;
};
class CTriangle :public CShape
{
private:
	double m_base, m_height;
public:
	CTriangle(double a = 1.0, double b = 1.0, double x = 0.0, double y = 0.0) : m_base(a), m_height(b), CShape(x, y) {}
	void out(ostream &sout) const
	{
		sout << m_base << ',' << m_height << ':'; CShape::out(sout);
	}
	double area()const { return 0.5*m_base*m_height; }
};

// Client code need not be changed
//   even if new shapes are added as following
//  class CTriangle: public CShape { ... }

#endif //_SHAPE_H
