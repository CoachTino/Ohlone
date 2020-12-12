#include <iostream>
#include <string>

using namespace std;

      string qs;
      int cnt;



      int main(){

            cout << "Content-type: text/html\n\n";

            qs = (getenv("QUERY_STRING"));
            // set_cnt(how_many(qs));

            string tempString;

            int start_pos = 0, pos;


            pos = qs.find("=", start_pos);
            tempString = qs.substr(pos+1);



          cout << "<html><head>"
                  "<title>Wassup dude</title>"
                  "<link rel=\"stylesheet\" href=\"form_style.css\" />"
                  "</head>" <<
                  "<body>\n" <<

                  "<h1>wassup "<<

                  tempString <<

                  " !</h1>"

                  
                  "</body>\n" <<
                  "</html>\n";


            cout << "<br>" << tempString << "<br>";
            return 0;
      }
