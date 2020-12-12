#ifndef WEBAPPS_H
#define WEBAPPS_H

#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

            struct FIELDS{
                        string name;
                        string value;
                    };

            class WebApps{
                    public:
                            WebApps(){

                                cout << "Content-type:text/html\n\n";
                                qs = (getenv("QUERY_STRING"));
                                //cout << "\ndebug with qs: " << qs << "<p>" << endl;
                                // set_qs(qs);
                                set_cnt(how_many(get_qs()));
                                //cout << "<br>debug with get_cnt: " << get_cnt() << "\n\n\n\n" << endl;//testing functions
                                }

                                void set_qs(string f_getenv){

                                    qs = f_getenv;

                                }

                                void set_cnt(int f_how_many) {

                                    cnt = f_how_many;

                                }

                                string get_qs() {

                                    return qs;

                                }

                                int get_cnt(){

                                    return cnt;

                                }

                                int how_many(string f_qs){

                                    int numberOfEqualSigns = 0;

                                    for (int i = 0; i < f_qs.length(); i++) {
                                        if (f_qs[i] == '='){
                                            numberOfEqualSigns++;
                                        }
                                    }
                                    return numberOfEqualSigns;
                                }

                                FIELDS *create_array(int f_cnt){

                                    FIELDS *fieldsDynamicArray = new FIELDS[f_cnt];

                                    return fieldsDynamicArray;

                                }

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

                            private:
                                string qs;
                                int cnt;
                        };
#endif // WEBAPPS_H
