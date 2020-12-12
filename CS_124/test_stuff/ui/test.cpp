#include <iostream>
#include <string>

using namespace std;

      string qs;
      int cnt;

      void build_form();
      // void set_cnt(int);
      // int how_many(string);
      // string get_qs();

      int main(){

            cout << "Content-type: text/html\n\n";

            // build_form();

            qs = (getenv("QUERY_STRING"));
            // set_cnt(how_many(qs));

            string tempString;

            int start_pos = 0, pos;


            pos = qs.find("=", start_pos);
            tempString = qs.substr(pos+1);


            return 0;
      }

////////////functions/////////////
      void build_form () {

            cout << 

                              "<body>\n" <<



                  "<form action=\"new.cgi\" method=\"GET\">\n" <<
                  "<label>Please Enter Your Name</label>\n" <<
                  "<input type=\"text\" name=\"name\" required=\"required\">\n" <<
                  "<input type=\"submit\" value=\"Submit\">"
                  "</form>\n" <<
                  "</body>\n";

          cout << "<html><head>"
                  "<title>Survey Vote</title>"
                  "<link rel=\"stylesheet\" href=\"form_style.css\" />"
                  "</head>" <<

                  "</html>\n";
      }