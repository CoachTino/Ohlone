#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <string>
#include <vector>

	class sortingLib{
		
		public:

			// bubble sort
			void bubbleSort(std::vector<std::string>&);
			void halfBubbleSort(std::vector<std::string>&);

			// selection sort
			void selectionSort(std::vector<std::string>&);
			void halfSelectionSort(std::vector<std::string>&);

			// insertion sort
			void insertionSort(std::vector<std::string>&);	
			void halfInsertionSort(std::vector<std::string>&);	
			

			// merge sort
			void mergeSort(std::vector<std::string>&t);		

			// quick sort
			void quickSort(std::vector<std::string>&);
	};

#endif