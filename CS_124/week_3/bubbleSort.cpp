#include <iostream>

// function prototype
void tinosCoolBubbleSort(int x[]);


int main(){

  // create an array with 5 indexes with values 51 26 93 0 and 1337
  int unsortedArray[5] = {51, 26, 93, 0, 1337};

  // line spacing for output
  std::cout << std::endl;

  // formatting output to console
  std::cout << "Original unsorted array: ";

  // loop to print out array to console
  for(int i = 0; i < 5; i++){

    std::cout << unsortedArray[i] << " ";
  }

  // line spacing for output
  std::cout << std::endl;

  // function call to sort array
  tinosCoolBubbleSort(unsortedArray);

  return 0;
}

/**************************************
* takes an unsorted array of integers *
* and sorts them in ascending order   *
* from least to greatest              *
* @parm array of integers             *  
**************************************/
void tinosCoolBubbleSort(int x[]){

  // temporary variable for swapping index values
  int temp;

  // loop to iterate until the whole array is sorted
  for(int h = 0; h < 5; h++){

    // loop to compare/swap index's 0-4
    for(int i = 0; i < 4; i++){

      if(x[i] > x[i+1]){

        // places index i+1 in temporary variable
        temp = x[i+1];

        // places value of index i+1 into index i
        x[i+1] = x[i];

        // places value of temp inside index i
        x[i] = temp;
      }
    }
  }

  // line spacing for output
  std::cout << std::endl;

  // formatting output to console
  std::cout << "New sorted array: ";

  // loop to print out array to console
  for(int j = 0; j < 5; j++){

    std::cout << x[j] << " ";
  }

  // line spacing for output
  std::cout << std::endl;
  std::cout << std::endl;

}