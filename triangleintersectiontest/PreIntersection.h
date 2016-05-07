#ifndef PreIntersection_HH_
#define PreIntersection_HH_

#include <iostream>

using namespace std;

typedef float float3[3];

enum TopologicalStructure
{
	INTERSECT, NONINTERSECT
};

struct Triangle
{
	float3 Normal_0;
	float3 Vertex_1, Vertex_2, Vertex_3;
};

struct point
{
	float x, y;
};


// copy 3D point to 2D point
static void copy_point(point& p, float3 f)
{
	p.x = f[0];
	p.y = f[1];
}

//4points det
inline float get_vector4_det(float3 v1, float3 v2, float3 v3, float3 v4)
{
	float a[3][3];
	for (int i = 0; i != 3; ++i)
	{
		a[0][i] = v1[i] - v4[i];
		a[1][i] = v2[i] - v4[i];
		a[2][i] = v3[i] - v4[i];
	}

	return a[0][0] * a[1][1] * a[2][2]
		+ a[0][1] * a[1][2] * a[2][0]
		+ a[0][2] * a[1][0] * a[2][1]
		- a[0][2] * a[1][1] * a[2][0]
		- a[0][1] * a[1][0] * a[2][2]
		- a[0][0] * a[1][2] * a[2][1];
}


//judge p point position crresponding to segement p1p2 using cross product
inline double direction(point p1, point p2, point p) {
	return (p.x - p1.x) * (p2.y - p1.y) - (p2.x - p1.x) * (p.y - p1.y);
}


// make sure if the p point which in the same line with segement p1p2 are in segment p1p2
inline int on_segment(point p1, point p2, point p) {
	double max = p1.x > p2.x ? p1.x : p2.x;
	double min = p1.x < p2.x ? p1.x : p2.x;
	double max1 = p1.y > p2.y ? p1.y : p2.y;
	double min1 = p1.y < p2.y ? p1.y : p2.y;
	if (p.x >= min && p.x <= max && p.y >= min1 && p.y <= max1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//the main function for judge segment p1p2 and segment p3p4 are intersection
inline int segments_intersert(point p1, point p2, point p3, point p4) {
	double d1, d2, d3, d4;
	d1 = direction(p3, p4, p1);
	d2 = direction(p3, p4, p2);
	d3 = direction(p1, p2, p3);
	d4 = direction(p1, p2, p4);
	if (d1 * d2 < 0 && d3 * d4 < 0)
	{
		return 1;
	}
	else if (d1 == 0 && on_segment(p3, p4, p1) == 1)
	{
		return 1;
	}
	else if (d2 == 0 && on_segment(p3, p4, p2) == 1)
	{
		return 1;
	}
	else if (d3 == 0 && on_segment(p1, p2, p3) == 1)
	{
		return 1;
	}
	else if (d4 == 0 && on_segment(p1, p2, p4) == 1)
	{
		return 1;
	}
	return 0;
}


//judege if the line and triangle in the same plane are intersection
inline bool line_triangle_intersert_inSamePlane(Triangle* tri, float3 f1, float3 f2)
{
	point p1, p2, p3, p4;

	copy_point(p1, f1);

	copy_point(p2, f2);

	copy_point(p3, tri->Vertex_1);

	copy_point(p4, tri->Vertex_2);

	if (segments_intersert(p1, p2, p3, p4))
	{
		return true;
	}

	copy_point(p3, tri->Vertex_2);

	copy_point(p4, tri->Vertex_3);

	if (segments_intersert(p1, p2, p3, p4))
	{
		return true;
	}

	copy_point(p3, tri->Vertex_1);

	copy_point(p4, tri->Vertex_3);

	if (segments_intersert(p1, p2, p3, p4))
	{
		return true;
	}

	return false;
}


inline void get_central_point(float3 centralPoint, Triangle* tri)
{
	centralPoint[0] = (tri->Vertex_1[0] + tri->Vertex_2[0] + tri->Vertex_3[0]) / 3;

	centralPoint[1] = (tri->Vertex_1[1] + tri->Vertex_2[1] + tri->Vertex_3[1]) / 3;

	centralPoint[2] = (tri->Vertex_1[2] + tri->Vertex_2[2] + tri->Vertex_3[2]) / 3;
}




//vector difference
inline void get_vector_diff(float3& aimV, const float3 a, const float3 b)
{
	aimV[0] = b[0] - a[0];

	aimV[1] = b[1] - a[1];

	aimV[2] = b[2] - a[2];
}
//vector inner product
inline float Dot(const float3& v1, const float3& v2)
{
	return v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
}

//judge if the point in the triangle
inline bool is_point_within_triangle(Triangle* tri, float3 point)
{
	float3 v0;
	get_vector_diff(v0, tri->Vertex_1, tri->Vertex_3);
	float3 v1;
	get_vector_diff(v1, tri->Vertex_1, tri->Vertex_2);
	float3 v2;
	get_vector_diff(v2, tri->Vertex_1, point);
	float dot00 = Dot(v0, v0);
	float dot01 = Dot(v0, v1);
	float dot02 = Dot(v0, v2);
	float dot11 = Dot(v1, v1);
	float dot12 = Dot(v1, v2);
	float inverDeno = 1 / (dot00* dot11 - dot01* dot01);
	float u = (dot11* dot02 - dot01* dot12) * inverDeno;
	if (u < 0 || u > 1) // if u out of range, return directly
	{
		return false;
	}
	float v = (dot00* dot12 - dot01* dot02) * inverDeno;
	if (v < 0 || v > 1) // if v out of range, return directly
	{
		return false;
	}
	return u + v <= 1;
}


//judege if the triangles intersection in the same plane
inline bool triangle_intersert_inSamePlane(Triangle* tri1, Triangle* tri2)
{
	if (line_triangle_intersert_inSamePlane(tri2, tri1->Vertex_1, tri1->Vertex_2))
	{
		return true;
	}
	else if (line_triangle_intersert_inSamePlane(tri2, tri1->Vertex_2, tri1->Vertex_3))
	{
		return true;
	}
	else if (line_triangle_intersert_inSamePlane(tri2, tri1->Vertex_1, tri1->Vertex_3))
	{
		return true;
	}
	else
	{
		float3 centralPoint1, centralPoint2;

		get_central_point(centralPoint1, tri1);

		get_central_point(centralPoint2, tri2);

		if (is_point_within_triangle(tri2, centralPoint1) || is_point_within_triangle(tri1, centralPoint2))
		{
			return true;
		}

		return false;
	}
}

#endif
