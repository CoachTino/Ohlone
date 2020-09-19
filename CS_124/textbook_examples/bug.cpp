#include <iostream>
using namespace std;

class Bug{
	public:
		int get_position() const;
		void reset();
		void up();
	private:
		int position = 0;
};

int Bug::get_position() const{

	// help from the whole class
	// provides the current value of object location
	return position;
}

void Bug::reset(){
	
	// move the bug to the bottom of the pole
	position = 0;

}

void Bug::up(){
	
	// move bug up 10cm
	position += 10;

	if(position >= 100){

		position = 0;
	}

}

int maint(){
	
	Bug bugsy;
	Bug itsy_bitsy;

	bugssy.reset();
	itsy_bitsy.reset();
	bugsy.up();
	bugsy.up();
	cout << bugsy.get_position() << endl;
	cout << "Expected: 20" << endl;




}