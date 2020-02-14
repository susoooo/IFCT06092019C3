#include <iostream>
#include <chrono>
#include <random>

using namespace std;

int rand_gen();

class Point3D {
	public:
	int x, y, z;
	
	void init_rand_point();
};

void Point3D::init_rand_point()
{
	x = rand_gen();
	y = rand_gen();
	z = rand_gen();
}

int
main(void)
{
	int i;
	Point3D point3D[3];
	
	for (i = 0 ; i < 3 ; i++) {
		point3D[i].init_rand_point();
		cout << "point3D[" << i << "] = " << endl;
		cout << "x: " << point3D[i].x << endl;
		cout << "y: " << point3D[i].y << endl;
		cout << "z: " << point3D[i].z << endl;
	}
	
	
	return 0;
}

int
rand_gen()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);

	std::uniform_int_distribution<int> distribution(1,10);
	
	return distribution(generator);
}