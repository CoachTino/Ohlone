#include <iostream>
using namespace std;

int main()
{
  char c = 'a';
  char d = '!';
  int x = 1337;

  cout << "0x" << hex << (int)c << endl;  // output in hexadecimal
  cout << "ASCII: " << c << endl; // output in ascii


  cout << "0x" << hex << (int)d << endl;  // output in hexadecimal
  cout << "ASCII: " << d << endl; // output in ascii

  cout << "leet hax bro: " << x << endl;
   cout << "0x" << hex << x << endl;  // output in hexadecimal
  
  printf("%02hhx\n", c);



  return 0;
}