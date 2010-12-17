///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/type_mat2x2.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

static bool test_operators()
{
	glm::mat2x2 m(1.0f);
	glm::vec2 u(1.0f);
	glm::vec2 v(1.0f);
	float x = 1.0f;
	glm::vec2 a = m * u;
	glm::vec2 b = v * m;
	glm::mat2x2 n = x / m;
	glm::mat2x2 o = m / x;
	glm::mat2x2 p = x * m;
	glm::mat2x2 q = m * x;

	return true;
}

int main()
{
	bool Result = true;

	Result = Result && test_operators();

	assert(Result);
	return Result;
}
