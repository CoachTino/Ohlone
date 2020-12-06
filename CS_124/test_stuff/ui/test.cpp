#include <iostream>

using namespace std;
////////////functions/////////////
            void build_form () {
                cout << "<html><head>"
                        "<title>Survey Vote</title>"
                        "<link rel=\"stylesheet\" href=\"form_style.css\" />"
                        "</head>" <<
                        "<body>\n" <<
                        "<form action=\"survey.cgi\" method=\"GET\">\n" <<
                        "	Do you still like programming after this final?<br>\n" <<
                        "		<label for=\"vote\">Yes</label>\n" <<
                        "		<input name=\"vote\" value=\"Y\" type=\"radio\"></td><br>\n" <<
                        "		<label for=\"vote\">No</label>\n" <<
                        "		<input name=\"vote\" value=\"N\" type=\"radio\"></td><p>\n" <<
                        "	<p><input type=\"submit\" value=\"Submit\">\n" <<
                        "</form>\n" <<
                        "</body>\n" <<
                        "</html>\n";
            }
int main(){

	build_form();

	return 0;
}