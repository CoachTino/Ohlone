#include "ball.h"

	/* constructs a ball at (0,0) traveling northeast.
	@param right_wall the position of the wall to the right
	@param top wall the position of the wall at the top
	*/
	Ball::Ball(int right_wall, int top_wall){

		max_x = right_wall;
		max_y = top_wall;
		
		x  = 0;
		y  = 0;
		dx = 1;
		dy = 1;
	}

	/*
	  moves the ball.
	*/
	void Ball::move(){

		if(x == max_x){

			Ball::turn();
		}

		if(y == max_y){

			Ball::turn();
		}

		x += dx;
		y += dy;

		if(x == 0){

			Ball::turn();
		}

		if(y == 0){

			Ball::turn();
		}
	}

	/*
	  turns the ball direction 90 degrees clockwise
	*/
	void Ball::turn(){

		if(x >= max_x){

			dx *= -1;
		}

		if(y >= max_y || y <= 0){

			dy *= -1;
		}
/*
		if(y <= 0){

			dy *= -1;
			y = 0;
		}*/
	}

	/*
	  gets teh current x-position.
	  @return the x-position
	*/
	int Ball::get_x()const {

		return x;
	}

	/*
	  gets the current y-position.
	  @return the x-position
	*/
	int Ball::get_y() const {

		return y;
	}