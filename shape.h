#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    Shape();
    virtual ~Shape();

    virtual double area() const = 0;
};

class Rect : public Shape {
private:
    double length, width;

public:
    virtual void setWidth(double _width);
    virtual void setLength(double _length);

    Rect(double _width, double _length);
    virtual double area() const override;

};

class Square : public Rect {
public:
    virtual void setWidth(double _width);
    virtual void setLength(double _width);
    virtual void setSide(double _side);

    Square(double _side);

};

#endif // SHAPE_H
