#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
    public:

    	/* constructor that takes yearModel and make as arguments
    	* and assigns them to objects yearModel and make members
    	* and assigns 0 to the member speed
    	*/ 
        Car(int, std::string);

        // get value stored in yearModel member
        int getYearModel() const;

        // get value stored in speed member
        int getSpeed() const;

        // get value stored in make member
        std::string getMake() const;

        // adds 5 to the speed member variable
        void accelerate(int);

        // subtracts 5 from the speed member variable
        void brake(int);

    private:

    	int yearModel;
    	int speed;
    	std::string make;
};

#endif // CAR_H
