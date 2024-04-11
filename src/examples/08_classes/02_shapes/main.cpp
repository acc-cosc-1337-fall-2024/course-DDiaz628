//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	std::vector<std::unique_ptr<Shape>> shapes;

	shapes.push_back(std::make_unique<Circle>());
	shapes.push_back(std::make_unique<Line>());

	for(auto& shape: shapes)
	{
		shape->draw();
	}


	/*
	Shape* s;//pointer to a Shape type that includes Circle and Line
	//Shape s1;
	//Shape s;
	//s.draw();

	Circle c;
	s = &c;
	s ->draw();
	//c.draw();

	Line l;
	s = &l;
	s->draw();

	//l.draw()
	*/
	return 0;
}