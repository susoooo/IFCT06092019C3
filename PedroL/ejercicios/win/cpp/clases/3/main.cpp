#include <iostream>
#include <ctime>

using namespace std;

#define ACCEL_FACTOR 33

void hang_for(/* ??? */)
{
	std::chrono::microseconds; /* ??? */
}

class Car {
	public:
	string name;
	bool power, lock;
	float speed;
	
	void chng_ignit_state(bool newstate)
	{
		power = newstate;
	}
	
	void chng_locked_state(bool newstate)
	{
		lock = newstate;
	}
	
	void accelerate_to(float trgtspeed)
	{
		speed = trgtspeed;
	}
};

int
main(void)
{
	Car mycar;
	int pedaltometal;
	
	cout << "You´re at a track, about to test your new Ferrari o_o" << endl
	     << "Name your new car!" << endl;
	cin >> mycar.name;
	cout << "Your new car is called " << mycar.name << " now!" << endl;
	hang_for(5);
	
	cout << "Walking to " << mycar.name << endl;
	hang_for(2.5);
	
	mycar.chng_locked_state(false);
	cout << mycar.name << " unlocked" << endl;
	hang_for(0.3);
	
	cout << "Getting in..." << endl;
	hang_for(4);
	
	mycar.chng_ignit_state(true);
	cout << mycar.name << " is ignited" << endl;
	hang_for(2);
	
	cout << "You accelerate to:" << endl;
	cin >> pedaltometal;
	cout << "...damn, alright..." << endl;
	hang_for(0.2);
	
	mycar.accelerate_to(pedaltometal);
	cout << "*vroooooooom*" << endl;
	hang_for(pedaltometal / ACCEL_FACTOR);
	
	cout << mycar.name << " is now at " << mycar.speed << " km/h" << endl;
	hang_for(0.3);
	cout << "*...vrooooooom*" << endl;
	hang_for(4);
	
	cout << "\"That´s enough\", you think";
	hang_for(0.3);
	cout << "Time to get off" << endl;
	hang_for(0.3);
	
	mycar.accelerate_to(0);
	cout << "Braking..." << endl;
	hang_for(pedaltometal / ACCEL_FACTOR);
	
	cout << mycar.name << " is stopped now" << endl;
	hang_for(1);
	
	mycar.chng_ignit_state(false);
	cout << "You switch off " << mycar.name << endl;
	hang_for(3);
	
	cout << "You get out of " << mycar.name << endl;
	hang_for(1);
	
	cout << "The End!" << endl;
			
	return 0;
}