#ifndef SHAPE_H
#define SHAPE_H


class Shape {
public:
    Shape();
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual int sides() const = 0;
    //TODO: ask why i can't make one that returns strings
};

class Rect : public Shape {
    double length, width;
public:
    void setWidth(double _width);
    void setLength(double _length);
};


class Square: public Shape {
    Square() {

    }
    virtual double area() const override;                   //this is a good place to have override-- not required, but good to note that we know it overrides a member function!
    virtual double perimeter() const override;
    virtual int sides() const override;
};

#endif // SHAPE_H
