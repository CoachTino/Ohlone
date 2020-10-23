#include <string>
#include <iostream>

using namespace std;

int main(){

	string name;
int counter = 0;
while(counter < 3){
	cout << "enter a name\n";
	getline(cin,name);

	cout << endl;
	bool stringHasASpace = false;

		// this for loop is only here
		// to check if each index
		// of the string contains ' '
		for(int i = 0; i < name.length(); i++){

			if(name[i] == ' '){

				stringHasASpace = true;
			}

		} // end for loop

	if(stringHasASpace){
		
	}else{

		// store the data in memory here
		cout << "girrrrrrrrrrrrrl\n";
		// sentence[counter]= words;
  //       copy[counter]=words;

  //       cout<<sentence[counter]<<endl;
	}

	counter++;
}	

	return 0;
}