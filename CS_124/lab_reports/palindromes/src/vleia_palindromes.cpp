/*
  author: Tino Lei'a
  program name: Palindromes
  description: lets the user choose to either input their
  			   own string or choose between 2 files to test
  			   for palindromes. They can also choose to 
  			   save the palindromes to their own text file.
  date authored: Fall 2020
*/

// needed library and header files
#include <iostream>
#include "vleia_userInterface.h"

      void build_form();

	// driver code
	int main(){
		
		// create object of userInterface to run the program
		userInterface uiObject;

		return 0;
	}

	////////////functions/////////////
      void build_form () {

          std::cout << "Content-type: text/html\n\n" 
                  "<html><head>"
                  "<title>Survey Vote</title>"
                  "<link rel=\"stylesheet\" href=\"form_style.css\" />"
                  "</head>" <<
                  "<body>\n" <<
                  "<form action=\"survey.cgi\" method=\"GET\">\n" <<
                  "     Do you still like programming after this final?<br>\n" <<
                  "           <label for=\"vote\">Yes</label>\n" <<
                  "           <input name=\"vote\" value=\"Y\" type=\"radio\"></td><br>\n" <<
                  "           <label for=\"vote\">No</label>\n" <<
                  "           <input name=\"vote\" value=\"N\" type=\"radio\"></td><p>\n" <<
                  "     <p><input type=\"submit\" value=\"Submit\">\n" <<
                  "</form>\n" <<
                  "</body>\n" <<
                  "</html>\n";
      }