#include "shape.h"

//===== Shape
Shape::Shape() { }
Shape::~Shape() { }

//===== Rectangle
Rect::Rect(double _width, double _length):length(_length),width(_width) { }
double Rect::area() const { return length*width; }

void Rect::setLength(double _length) { length = _length; }
void Rect::setWidth(double _width) { width = _width; }

//===== Square
Square::Square(double _side):Rect(_side, _side) { }

void Square::setLength(double _length) { setSide(_length); }
void Square::setWidth(double _width) { setSide(_width); }
void Square::setSide(double _side) {
    Rect::setLength(_side);
    Rect::setWidth(_side);
}
