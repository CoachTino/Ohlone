// File: lc_final.cpp
// Author: Leo Chan
// cs102 Online
// Date: 12-4-2006
// Description: Final Project


#include <cstdlib>
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

struct FORM
{
      char name[10];
      char data[10];
      
       };

// Function Prototypes
int equalcount(string);
FORM *create_array(int);
void getInfo(string, FORM *);
string param(string, FORM *);



int main()
{

	//string s = "first=Jon&last=Degallier&one=blue&two=&three=&four=&five=&six=";    
    	string s(getenv("QUERY_STRING")); 
    	cout << "Content-type:text/html\n\n";
    

    
    cout << "<html><head>";
    cout << "<title>color</title></head>";
    cout << "<body bgcolor=#FFFFFF>";
    

    
    
    
    int equal;    
        
    equal = equalcount(s);
    
    FORM *dyn_array;
    dyn_array = create_array( equal );
    getInfo(s, dyn_array); 
    
    cout << "<center><table border=0 bgcolor=#FFFFFF>";
    cout << "<tr><td colspan=4>";
    cout << "Answer Page";
    cout << "</td></tr>";

    
    string first = param("first", dyn_array);
    string last =  param("last", dyn_array);
    string one = param("one", dyn_array);
    string two = param("two", dyn_array);
    string three = param("three", dyn_array);
    string four = param("four", dyn_array);
    string five = param("five", dyn_array);
    string six = param("six", dyn_array);       
    
    
    cout << "<tr><td></td><td><br>First Name:</td><td><br>Last Name:</td></tr>"<< endl;
    cout << "<tr><td>Your name is:</td>"<< endl;
    cout << "<td>"<< first <<"</td><td>"<< last <<"</td>"<< endl;
    
    cout << "<tr><td></td>"<< endl;
    cout << "<td><img src=img/1.gif></td>"<< endl;
    cout << "<td><img src=img/2.gif></td>"<< endl;
    cout << "<td><img src=img/3.gif></td></tr>"<< endl;
    
    cout << "<tr>"<< endl;
    cout << "<td></td>" << endl;
	cout << "<td>"<< one <<"</td>"<< endl;
	cout << "<td>"<< two <<"</td>"<< endl;
	cout << "<td>"<< three <<"</td>"<< endl;
	cout << "</tr>"<< endl;
    
    cout << "<tr>"<< endl;
    cout << "<td>Answer</td>"<< endl;
	cout << "<td>Red</td>"<< endl;
	cout << "<td>Blue</td>"<< endl;
	cout << "<td>Green</td>"<< endl;
	cout << "</tr>"<< endl;
    
    cout << "<tr>"<< endl;
    cout << "<td></td>" << endl;
    cout << "<td><img src=img/4.gif></td>"<< endl;
    cout << "<td><img src=img/5.gif></td>"<< endl;
    cout << "<td><img src=img/6.gif></td>"<< endl;
    cout << "</tr>"<< endl;
    
    cout << "<tr>"<< endl;
    cout << "<td></td>" << endl;
    cout << "<td>"<< four <<"</td>"<< endl;
	cout << "<td>"<< five <<"</td>"<< endl;
	cout << "<td>"<< six <<"</td>"<< endl;
	cout << "</tr>"<< endl;
	
    cout << "<tr>"<< endl;
    cout << "<td>Answer</td>"<< endl;
	cout << "<td>Yellow</td>"<< endl;
	cout << "<td>Black</td>"<< endl;
	cout << "<td>Pink</td>"<< endl;
	cout << "</tr>"<< endl;   	
    	
	cout << "</table></center></body></html>"<< endl;
    

    
    system("PAUSE");
    return 0;
}

int equalcount(string s)
{
    int index, equal;
     index = 0;
     equal = 0;
     
     for(index; index<s.length(); index++)
     {
                if( s[index] == '=')
                {
                    equal++;
                    }
	
}

return equal;

}

FORM *create_array(int equal)
{
    FORM *array;
    array = new FORM[equal];
    return array;
}



void getInfo(string qs, FORM *dyn_array)
{	//qs = query_string

	int x = 0;
	int y = 0;
	int i = 0;
	while( x < qs.length()) 
	{
           
                    
		while (isalnum(qs[x]))
		{
        
			            
            dyn_array[i].name[y] = qs[x];
			

        	y++;
			x++;				
		}	

		
		dyn_array[i].name[y] = '\0';

		y = 0;
		while (!(isalnum( qs[x])))
		{
			x++;
        }
		
		while ((isalnum( qs[x])) || (isspace(qs[x])))
		{

           
			dyn_array[i].data[y] = qs[x];
			
  	
        	
            y++;
			x++;
		}
		
		while (!(isalnum(qs[x])))
		{
			x++;
			
		}
			dyn_array[i].data[y] = '\0';        
		y = 0;
		

		i++;
	}
}

string param(string input, FORM *dyn_array)
{
     int index=0;
     
     string ans;
     
     for(index=0; index<10; index++)
     {
                  if(dyn_array[index].name == input)
                  {
                     
                     ans = dyn_array[index].data;
                          
                     return ans;
                          
                     }
                     
                   
                }           
                
                
    
       
       return "";
     
     }
     

