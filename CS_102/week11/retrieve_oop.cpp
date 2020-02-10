// File: retrieve_form_start.cpp
// Author:
// cs102 Online
// Date:
// Description: This program retrieves three form fields and sends the result
//				back to the browser

#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

            struct FIELDS
            {
                string name;
                string value;
            };

            const int cnt = 3;
            FIELDS name_value_pairs [cnt];
            string qs(getenv("QUERY_STRING"));

            class WebApps{
                public:
                    void parse(string qs, FIELDS f_name_value_pairs []){

                        cout << "debug in parse<br>\n" << endl;
                        // string name, value;
                        int start_pos = 0, pos;
                        for (int counter=0; counter < cnt; counter++) {
                            pos = qs.find("=", start_pos);
                            f_name_value_pairs[counter].name = qs.substr(start_pos, pos - start_pos);
                            cout << "name: " << f_name_value_pairs[counter].name << "<br>" << endl;
                            start_pos = pos + 1;
                            pos = qs.find("&", start_pos);
                            if (pos == string::npos) {
                                pos = qs.length();
                            }
                            f_name_value_pairs[counter].value = qs.substr(start_pos, pos - start_pos);
                            cout << "value: " << f_name_value_pairs[counter].value << "<br>" << endl;
                            start_pos = pos + 1;
                        }
                    }

                    string param(string lookUp, FIELDS f_name_value_pairs[], int f_cnt){

                        string f_value;
                        bool found = false;
                        for (int i=0; i < f_cnt; i++)
                        {
                            if(f_name_value_pairs[i].name != lookUp);
                                //do nothing
                            else if(f_name_value_pairs[i].name == lookUp){
                                found = true;
                                f_value = f_name_value_pairs[i].value;
                            }
                        }
                        if (found)
                            return f_value;
                        else
                            return "";
                    }
            };

            //main begins
            int main()
            {
                cout << "Content-type:text/html\n\n";
                cout << "<html>" << endl;
                cout << "<head>" << endl;
                cout << "<title>Survey Results</title>" << endl;
                cout << "<link rel=\"stylesheet\" href=\"form_style.css\" />" << endl;
                cout << "<body align=\"center\">" << endl;
                cout << "<header align=\"center\">" << endl;
                cout << "<a href=\"index.html\">Home</a>" << endl;
                cout << "</header>" << endl;
                cout << "<p>" << endl;
                cout << "debug with qs: " << qs << "<p>" << endl;

                WebApps wo;
                wo.parse(qs, name_value_pairs);

                 // debug to show content of name_value_pairs
                cout << "debug to show content of name_value_pairs array: " << endl << "<br>";
                for (int index = 0; index<cnt; index++) {
                    cout << "name: " << name_value_pairs[index].name << " ";
                    cout << "value: " << name_value_pairs[index].value << endl << "<br>";
                }



                // Three fields data are retrieved from the param function
                string fieldOne = wo.param("firstname", name_value_pairs, cnt);
                string fieldTwo = wo.param("lastname", name_value_pairs, cnt);
                string fieldThree = wo.param("language", name_value_pairs, cnt);

                cout << "You selected " << fieldThree << endl;
                cout << "</p>" << endl;
                cout << "</body>" << endl;
                cout << "</head>" << endl;
                cout << "</html>" << endl;

                return 0;
            }
