#include <iostream>
#include <string>
#include <fstream>

#include "map.h"
#include "link.h"
#include "BinaryTree.h"

using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::fstream;

	string name, helpAnswer, aboveHelpAnswer, choice, choice1, choice2;

  const int povertyLineInMonthlyDollarsInFremont = 1875;

  int income, 
      rent, 
      grocery, 
      utility, 
      costOfLiving,
      categoryMenuUserInput;

  const string questionsArray[4]= {"What is your monthly expenses in rent?","What is your monthly expenses in grocery?","What is your monthly expenses in utility?","\nWhat is your monthly household income?"};


	void printFremontPovertyData();
	void setUserName();
	void greetTheUser();

  void getIncome();
  void getRent();
  void getGrocery();
  void getUtility();
  bool calculateUserPovertyStatus();

  void askIfTheUserWantsHelp();
  void storeUsersAnswerForHelp();
  bool storeAboveUsersAnswerForHelp();

  void printCategoryMenu();
  void takeCategoryMenuUserInput();

  void addUserThatNeedsHelpToFile(int categorySelection);
  void waitlist(string, string);

  void addAbovePovertyLineUsersToFile(int menuSelection, string name);
  bool searchForName(string fileName, string name);


  // //////////////////start of main////////////////////
	int main(){
   
		setUserName();
		greetTheUser();

    cout << "\n\nLets get started.\n\n\n";
    askIfTheUserWantsHelp();
    storeUsersAnswerForHelp();

    if(helpAnswer == "yes"){

      getIncome();

      if(calculateUserPovertyStatus()){
// ****************BELOW THE POVERTY LINE ACTION HERE**************************
        do{
        
          printCategoryMenu();
          takeCategoryMenuUserInput();

          addUserThatNeedsHelpToFile(categoryMenuUserInput);

          cout << std::endl <<"Would you like to repeat the process?(y/n): ";
          cin >> choice; 

        }while(choice == "y");

      }else{
// ****************ABOVE THE POVERTY LINE ACTION HERE**************************
        

        
        if(storeAboveUsersAnswerForHelp()){

          // do{
        
            printCategoryMenu();
            takeCategoryMenuUserInput();
            
            addAbovePovertyLineUsersToFile(categoryMenuUserInput, name);

          //   cout << std::endl <<"Would you like to repeat the process?(y/n): ";
          //   cin >> choice; 

          // }while(choice == "y");
        }
      }
	  }
  }
  // //////////////////end of main////////////////////

	void setUserName(){

		// ask for the user's name
		cout << "\nHello, what is your name? ";

		// store user input
		getline(cin, name);
	}

	void printFremontPovertyData(){

	    cout << "\nIn the Fremont city, there are a total of 13.1% people under poverty line. "
  		<<  "The amount of 1875/month low (45000/yr for 2) income and the family threshold " 
  		<<  "determines whether you are above or under poverty line and since you make it "
  		<<	"above the poverty line.\n";
	}

		void greetTheUser(){
	
		// print out to the console 
		cout << "\nWassup " << name << "!" << endl;
		cout << "\nThis program will find out if you are above or below ";
		cout << "the poverty line in the city of Fremont. \nIf you fall below it we can help.\n";
		cout << "If you are above the poverty line, there are ways you can assist others ";
		cout << "if you choose.\n";
	}

  void getIncome(){

    cout << questionsArray[3] << endl;
    cin >> income;
  }
  
  void getRent(){

    cout << questionsArray[0] << endl;
    cin >> rent;
  }

  void getGrocery(){

    cout << questionsArray[1] << endl;
    cin >> grocery;
  }

  void getUtility(){

    cout << questionsArray[2] << endl;
    cin >> utility;
  }

  bool calculateUserPovertyStatus(){

    printFremontPovertyData();

    if(income < povertyLineInMonthlyDollarsInFremont){

      cout << "\nUnfortunately, you fall below the poverty line for the city of Fremont.\n";
      cout << "However, we do have resources to assist you.\n";

      return true;
    
    }else{

      cout << "\nSorry you're above the poverty line.\n";
      cout << "We do provide opportunities to assist others, if you would like?(yes/no)\n";

      return false;
    }
  }

  void askIfTheUserWantsHelp(){

    cout << "\n\nWould you like some assistance in any of the below areas? (y/n)\n";
    cout << "\tJob Recommendation\n";
    cout << "\tRide sharing\n";
    cout << "\tFood\n";
  }

  void storeUsersAnswerForHelp(){

    while(!(helpAnswer == "yes" | helpAnswer == "no")){
      cin >> helpAnswer;

      if(!(helpAnswer == "yes" | helpAnswer == "no")){
          
          cout << "You entered an invalid response. Please try again.\n";
      }
    }
  }

  bool storeAboveUsersAnswerForHelp(){

    while(!(aboveHelpAnswer == "yes" | aboveHelpAnswer == "no")){
      cin >> aboveHelpAnswer;

      if(!(aboveHelpAnswer == "yes" | aboveHelpAnswer == "no")){
          
          cout << "You entered an invalid response. Please try again.\n";
      }
    }

    if(aboveHelpAnswer == "no" | aboveHelpAnswer == "No"){

      return false;
    }

    return true;
  }

  void printCategoryMenu(){

    std::cout << "\nWhich category would you like to help out in?" << std::endl;
    std::cout << "1. Job Recommendation" <<std::endl;
    std::cout << "2. Ride sharing" <<std::endl;
    std::cout << "3. Food" <<std::endl;
    std::cout<< "Input option(1-3): ";
  }

  void takeCategoryMenuUserInput(){

    while(categoryMenuUserInput < 1 | categoryMenuUserInput > 3){
      cin >> categoryMenuUserInput;

      if(categoryMenuUserInput < 1 | categoryMenuUserInput > 3){
          
          cout << "You entered an invalid response. Please try again.\n";
      }
    }
  }

void addUserThatNeedsHelpToFile(int categorySelection){
  Map m;

  if(categorySelection==1){
    m.print("job_recommendation.txt");
    
    std::cout << std::endl << "There are certain job available and stuff and may be you could be in the waitlist" <<std::endl;
    waitlist("job_recommendation_waitlist.txt",name);
  }
  else if(categorySelection==2){
    m.print("ride_sharing.txt");
    std::cout << std::endl << "The school provide to certain amount of people with bus cards and may be you could be in the waitlist" <<std::endl;
    waitlist("ride_sharing_waitlist.txt",name);
  }
  else if(categorySelection==3){
    m.print("food.txt");
    std::cout << std::endl << "There are other programs such as Ohlone Pantry that could help too and may be you could be in the waitlist" <<std::endl;
    waitlist("food_waitlist.txt",name);
  }
}

void waitlist(string fileName, string userName){
  node* head;
  node* tail;
  string reply;
  link l;
  BinaryTree tree;

  cout << "\nWould you like to be in the waitlist?(y/n) : \n";
  cin >> reply;
  if(reply== "y"){ 
    l.createQueue(head, tail,fileName,userName);
    tree.insertNode(userName);
  }
  cout<<"\nwould you like to see the names in the list?(y/n): \n";
  cin >> reply;
  if(reply=="y"){
    l.print(head);
    // tree.displayInOrder();
  }
}

void addAbovePovertyLineUsersToFile(int menuSelection, string name){
  bool b;
  std::string x;
  std::ofstream file; 
  if(menuSelection==1){
    
    b=searchForName("job_recommendation.txt",name);
    if(b==false){
    std::cout << "Please add a phone number or email for contact: ";
    std::cin >> x;
    file.open ("1.txt", std::ios::app);
    file << std::endl << name << "," << x ;
    file.close();
    }
  }
  else if(menuSelection==2){
    b=searchForName("ride_sharing.txt",name);
    if(b==false){
    std::cout << "Please add a phone number or email for contact: ";
    std::cin >> x;
    file.open ("2.txt", std::ios::app);
    file << std::endl << name << "," << x << std::endl;
    file.close();
    }
  }
  else if(menuSelection==3){
    b=searchForName("food.txt",name);
    if(b==false){
    std::cout << "Please add a phone number or email for contact: ";
    std::cin >> x;
    file.open ("3.txt", std::ios::app);
    file << std::endl << name << "," << x << std::endl;
    file.close();
    }
  }
  std::cout << "Thank you for helping out" <<std::endl;
}

bool searchForName(string fileName, string name){
  int k;
  std::string g,st1;

  std::ifstream file;
  file.open (fileName);
  while(!file.eof()){
  getline(file,g);
  for(int i=0;i<g.size();i++){
    if(g[i]==','){
      k=i;
    }
  }
  st1=g.substr(0,k);
  if(name ==st1){
    std::cout << "Name already in list."<< std::endl;
    return true;
  }
  }
  return false;
}