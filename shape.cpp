#include "shape.h"

Shape::Shape() { }

Rect::Rect(double _width, double _length):width(_width),length(_length) { }
double Rect::area() const {return length*width;}

void Rect::setLength(double _length) { length = _length; }
void Rect::setWidth(double _width) { width = _width; }

Square::Square(double _side){ }

void Square::setLength(double _length) {setSide(_length);}
void Square::setWidth(double _width) {setSide(_width);}
void Square::setSide(double _side) {

}
