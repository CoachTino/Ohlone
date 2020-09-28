#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <string>
#include <vector>

	class sortingLib{
		
		public:

			// hard coded test array
			std::string testArray[5] =  {" alphabet", "-apple", "\"abstract", "a", "acorn"};
			std::string testArrayNew[5] =  {"basketball", "bypass", "bounce", "b", "blasphemy"};

			// bubble sort
			void bubbleSort(std::vector<std::string>&);

			// selection sort
			void selectionSort(std::vector<std::string>&);
			
			// insertion sort
			void insertionSort(std::vector<std::string>&);	
			
			// merge sort
			void mergeSort(std::vector<std::string>&t);		

			// quick sort
			void quickSort(std::vector<std::string>&);

	};

#endif