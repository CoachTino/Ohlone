#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>

class Map{
  public:
  void print(std::string);
};

void Map::print(std::string name){
  std::string st1,st2,g;
  int k=0;
  std::map <std::string,std::string> m;
  std::map <std::string,std::string>::iterator pos;
  
  std::ifstream file;
  //read file
  file.open (name);
  while(!file.eof()){
    getline(file,g);
    for(int i=0;i<g.size();i++){
      if(g[i]==','){
        k=i;
      }
    }

    st1=g.substr(0,k);
    st2=g.substr(k+1);

    //map it
    m[st1]=st2;
  }  
  file.close();
  //print it
  std::cout << "Here is a list of contacts who could help out in this category." <<std::endl;
  std::cout <<std::endl;
  std::cout << std::setw(25)  << std::left << "Name" << "Contact Information" <<std::endl;
  for (pos = m.begin(); pos != m.end(); pos++){
    std::cout << std::setw(25)  << std::left << pos->first << pos->second <<std::endl;
  }
}  