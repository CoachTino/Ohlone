#include "sortingLib.h"
#include <iostream>
#include <vector>
#include <string>

    void sortingLib::bubbleSort(std::vector<std::string>& unsortedVector){//, int arraySize){

      std::string temp;
      int counter = unsortedVector.size();

      for(int h = 0; h < counter; h++){

        for(int i = 0; i < counter - 1; i++){

          if(unsortedVector[i] > unsortedVector[i+1]){

            swap(unsortedVector[i], unsortedVector[i+1]);
          }
        }
      }
    }

    void sortingLib::halfBubbleSort(std::vector<std::string>& unsortedVector){//, int arraySize){

      std::string temp;
      int counter = ((unsortedVector.size()- 1) / 2);

      for(int h = 0; h < counter; h++){

        for(int i = 0; i < counter - 1; i++){

          if(unsortedVector[i] > unsortedVector[i+1]){

            swap(unsortedVector[i], unsortedVector[i+1]);
          }
        }
      }
    }

    void sortingLib::selectionSort(std::vector<std::string>& unsortedVector){

      int minIndex;
      int counter = unsortedVector.size();

      for(int i = 0; i < counter - 1; i++){

        minIndex = i;

        for(int h = i + 1; h < counter; h++){

          if(unsortedVector[h] < unsortedVector[minIndex]){

              minIndex = h;
          }
        }
        swap(unsortedVector[minIndex], unsortedVector[i]);
      }
    }

    void sortingLib::halfSelectionSort(std::vector<std::string>& unsortedVector){

      int minIndex;
      int counter = (unsortedVector.size()- 1) / 2;

      for(int i = 0; i < counter - 1; i++){

        minIndex = i;

        for(int h = i + 1; h < counter; h++){

          if(unsortedVector[h] < unsortedVector[minIndex]){

              minIndex = h;
          }
        }
        swap(unsortedVector[minIndex], unsortedVector[i]);
      }
    }

    void sortingLib::insertionSort(std::vector<std::string>& unsortedVector){

      std::string temp;
      int counter = unsortedVector.size();
      
      for(int i = 1; i < counter; i++){
        //std::cout << "before sort: " << unsortedVector[i] << std::endl;
        temp = unsortedVector[i];
        int j = i - 1;

        while(j >= 0 && unsortedVector[j] > temp){

          unsortedVector[j+1] = unsortedVector[j];
          j = j-1;
        }
        unsortedVector[j+1] = temp;
      }
    }

    void sortingLib::halfInsertionSort(std::vector<std::string>& unsortedVector){

      std::string temp;
      int counter = (unsortedVector.size()- 1) / 2;
      
      for(int i = 1; i < counter; i++){
        //std::cout << "before sort: " << unsortedVector[i] << std::endl;
        temp = unsortedVector[i];
        int j = i - 1;

        while(j >= 0 && unsortedVector[j] > temp){

          unsortedVector[j+1] = unsortedVector[j];
          j = j-1;
        }
        unsortedVector[j+1] = temp;
      }
    }

    void sortingLib::mergeSort(std::vector<std::string>& unsortedVector){

      std::cout << "merge noice\n";
    }

    void sortingLib::quickSort(std::vector<std::string>& unsortedVector){

      std::cout << "quick noice\n";
    }