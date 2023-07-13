#include <iostream>
using namespace std;
#include <vector>
class Shape
{
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() { cout << "Destructor of Shape called\n"; };
};
 class Open_Shape : public Shape
{
public:
    virtual ~Open_Shape() { cout << "Destructor of Open Shape is  called\n"; };
};

class Closed_Shape : public Shape
{
public:
    ~Closed_Shape() { cout << "Destructor of Closed Shape is called\n"; };
};

//Use of virtual Keyword is optional  infront of function or destructor In derived class
class Line : public Open_Shape
{
public:
    virtual void draw()
    {
        cout << "\nDraw a Line \n";
    }
    virtual void rotate()
    {
        cout << "\nRotate a Line \n";
    }

    virtual ~Line() { cout << "\nDestructor of Line is called \n"; }
};
class Circle : public Closed_Shape
{
public:
    void draw()
    {
        cout << "\nDraw a circle \n";
    }
    void rotate()
    {
        cout << "\nRotate a circle \n";
    }

    ~Circle() { cout << "\nDestructor of Circle is called \n"; }
};

class Square : public Closed_Shape
{
public:
    void draw()
    {
        cout << "\nDraw a Square \n";
    }
    void rotate()
    {
        cout << "\nRotate a Square \n";
    }

    ~Square() { cout << "\nDestructor of Square is called \n"; }
};

void refresh(vector<Shape*> &V)
{
    for (auto v : V)
        v->draw();
}

int main()
{

    Open_Shape *p1 = new Line;
    Shape *p2 = new Circle;
    Shape *p3 = new Square;
    p1->draw();
    vector<Shape*> V = { p2, p3};
    refresh(V);
    Square S;
    Shape &p =S;
   p.draw();
   delete p1;
   delete p2;
   delete p3;
}