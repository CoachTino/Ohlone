/*
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 
  
// A normal C function that is executed as a thread  
// when its name is specified in pthread_create() 
void *myThreadFun(void *vargp) 
{ 
    sleep(1); 
    printf("Printing GeeksQuiz from Thread \n"); 
    return NULL; 
} 
   
int main() 
{ 
    pthread_t thread_id; 
    printf("Before Thread\n"); 
    pthread_create(&thread_id, NULL, myThreadFun, NULL); 
    pthread_join(thread_id, NULL); 
    printf("After Thread\n"); 
    exit(0); 
}
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
 
void * threadFunc(void * arg)
{
	std::cout << "Thread Function :: Start" << std::endl;
	// Sleep for 2 seconds
	sleep(2);
	std::cout << "Thread Function :: End" << std::endl;
	return NULL;
}
int main()
{
 
	// Thread id
	pthread_t threadId;
 
	// Create a thread that will function threadFunc()
	int err = pthread_create(&threadId, NULL, &threadFunc, NULL);
	// Check if thread is created sucessfuly
	if (err)
	{
		std::cout << "Thread creation failed : " << strerror(err);
		return err;
	}
	else
		std::cout << "Thread Created with ID : " << threadId << std::endl;
 
	// Do some stuff in Main Thread
 
	std::cout << "Waiting for thread to exit" << std::endl;
	// Wait for thread to exit
	err = pthread_join(threadId, NULL);
	// check if joining is sucessful
	if (err)
	{
		std::cout << "Failed to join Thread : " << strerror(err) << std::endl;
		return err;
	}
 
	std::cout << "Exiting Main" << std::endl;
 
	return 0;
}