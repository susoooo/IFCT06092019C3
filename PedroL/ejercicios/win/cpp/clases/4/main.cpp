#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <math.h>
#include <numeric>

using namespace std;

void seed_rand(void);
float rand_gen(float);

class
Point3D {
	float x, y, z;
	
	public:
	void set_rand();
	float get_x(void);
	float get_y(void);
	float get_z(void);
	
	friend float dist_entre(Point3D, Point3D);
};

void
Point3D::set_rand()
{
	x = rand_gen(10);
	y = rand_gen(10);
	z = rand_gen(10);
}

float
Point3D::get_x(void)
{
	return x;
}

float
Point3D::get_y(void)
{
	return y;
}

float
Point3D::get_z(void)
{
	return z;
}
/* */
class
Triangulo3D {
	Point3D vertex[3];
	
	public:
	void set_rand(void);
	float dist_entre(int, int);
	float get_0_x(void);
};

float
Triangulo3D::get_0_x(void)
{
	return vertex[0].get_x();
}

void
Triangulo3D::set_rand(void)
{
	for (int i = 0; i < 3; i++) {
		vertex[i].set_rand();
	}
}

float
Triangulo3D::dist_entre(int index1, int index2)
{
	float partialsub[3], sum;
	sum = 0;
		
	partialsub[0] = vertex[index1].get_x() - vertex[index2].get_x();
	partialsub[1] = vertex[index1].get_y() - vertex[index2].get_y();
	partialsub[2] = vertex[index1].get_z() - vertex[index2].get_z();
	
	for (int i = 0; i < 3; i++) {
		sum += partialsub[i];
	}
	
	return sqrt(sum);
}

int
main(void)
{
	Triangulo3D trian3d;
	
	seed_rand();
	trian3d.set_rand();
	
	cout << trian3d.get_0_x() << endl;
	cout << trian3d.dist_entre(0, 1) << endl;
	
	return 0;
}

void
seed_rand(void)
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	
	srand(seed);
}

float
rand_gen(float ceil)
{
	return static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/ceil));
}