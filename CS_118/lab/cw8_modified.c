#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

	// function prototype
	void* thread_function(void*);

	// global attributes
	int matchCount = 0;
	int randomNumber = 0;
	static int CONSTANT = 5;
	static int loopCount = 10;
	pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
	pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;


	// driver code
	int main(int avgc, char** avgs){
		
		 srand(time(0));

		 // return value
		 int rc;

		 // thread id
		 pthread_t tid;

		 		  	 pthread_mutex_unlock(&mutex2);


		 // thread creation
		 // thread id, default attributes, function call, arbitrary #
		 rc = pthread_create(&tid, NULL, thread_function, (void*)randomNumber);

		 // if thread creation fails exit
		 if(rc){

	       	printf("\n ERROR: return code from pthread_create is %d \n", rc);
	       	exit(1);
	   	 }
		 

		 for(int i = 0; i < loopCount; i++){
			 if(randomNumber == CONSTANT){
		         matchCount++;
		     }
		         	 printf("rng: %d\n", randomNumber);

		         	 printf("match: %d\n", matchCount);

		  	 pthread_mutex_unlock(&mutex2);
		 }	 
	   	 pthread_join(tid, NULL);



		 // debug/verify output
		 printf("matchCount: %d\n", matchCount);

		 return 0;
	}

	void* thread_function(void* data){
	 
	 	 //data received by thread
     	 int my_data = (int)data;     	 
	 
     	 pthread_detach(pthread_self());

	 	 // insert mutex here to lock/unlock global access to matchCount (*my_data)
	 	 pthread_mutex_lock(&mutex2);
	     		 for(int i = 0; i < loopCount; i++){

    	 randomNumber = rand() % 10;

    	 printf("rng: %d\n", randomNumber);
	     }
	  	 pthread_mutex_unlock(&mutex1);
	  	 // thread termination, free resource
		 pthread_exit(NULL);
	}