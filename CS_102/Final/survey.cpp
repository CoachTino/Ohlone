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
#include "WebApps.h"
#include "FileApps.h"

using namespace std;

            WebApps wo;
            FileApps fo ("survey.txt");

            void build_form();
            void save_data_line(string);
            void display_result(string []);

            string prepare_vote(int);

            int main()
            {
                const int cnt = wo.get_cnt();
                if (cnt != 0) {
                    cout << "debug with cnt != 0<br>" << endl;
                        //call function to prepare vote
                    string data_line = prepare_vote(cnt);
                        cout << "debug with data_line: " << data_line << "<br>" << endl;
                        //save_data_line() appends the vote to the end of survey.txt
                    fo.save_data_line(data_line);
                        //read_data() opens survey.txt and populates array data_array[]
                    fo.read_data();
                        cout << "debug past read_data()<br>" << endl;
                        //array data_array[] is now ours (contains all of the votes as strings
                    string *data_array = fo.get_data_array();
                    cout << "From main() debug with 1th element: " << data_array[0] <<
                                "<br>" << endl;
                    build_form();
                    display_result(data_array);
                    cout << "<a href=\"http://toolkit.cs.ohlone.edu/~gen222/survey.txt\">Raw Data</a>" << endl;
                }else {
                    build_form();
                    fo.read_data();
                    string *data_array = fo.get_data_array();
                    display_result(data_array);
                }
                return 0;
            }

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

            string prepare_vote(int f_cnt){

                        //create dynamic array name_value_pairs[] from the wo object
                        //as done earlier
                        FIELDS *name_value_pairs = wo.create_array(wo.get_cnt());

                        //parse qs into name_value_pairs[] array from the wo object
                        //as done earlier
                        wo.parse(wo.get_qs(), name_value_pairs);

                        //param the vote field value into variable 'vote' from the wo object
                        //as done earlier
                        string vote = wo.param("vote", name_value_pairs, wo.get_cnt());

                        cout << "debug with vote: " << vote << "< br>" << endl;

                        return  vote + "|\n";	//the new line character will put each vote
                        //on a new line in the file
            }

            int * create_int_array(int x){

                        int *arrayPointer = new int[x];
                        return arrayPointer;
            }

            void display_result(string f_data_array[]){

                    int *vote_tally_array = create_int_array(fo.get_survey_txt_cnt());

                    for(int i = 0; i < fo.get_survey_txt_cnt(); i++){

                        vote_tally_array[i] = 0;
                    }

                    for(int i = 0; i < fo.get_survey_txt_cnt(); i++){

                        if(f_data_array[i] == "Y|"){

                            vote_tally_array[0]++;

                        }else if(f_data_array[i] == "N|"){

                        vote_tally_array[1]++;
                        }
                    }

                    cout << "Votes for yes: " << vote_tally_array[0];
                    cout << "\n" << endl;
                    cout << "Votes for no: " << vote_tally_array[1] << endl;
            }
