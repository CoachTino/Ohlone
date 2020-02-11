#include <iostream>
#include <string>

using namespace std;

int main(){


  int y = 10;
  cout << y << endl;
  cout << "0x" << hex << (int)y << endl;  // output in hexadecimal
  cout << "ASCII: " << y << endl; // output in ascii
  cout << "line break\n\n\n";
  
  uint32_t n = 22;
  cout << (int)n << endl;
  cout << &n << endl;
  cout << "0x" << hex << (int)n << endl;  // output in hexadecimal
  cout << "ASCII: " << n << endl; // output in ascii
  cout << "line break\n\n\n";\

  char c = ':';
  char d = '*';
  int x = 1337;
  const char* f = "duh";

  cout << "0x" << hex << (int)c << endl;  // output in hexadecimal
  cout << "ASCII: " << c << endl; // output in ascii
    printf("printf = %02hhx\n", c);

    cout << "line break\n\n\n";



  cout << "0x" << hex << (int)d << endl;  // output in hexadecimal
  cout << "ASCII: " << d << endl; // output in ascii
    cout << "line break\n\n\n";


  cout << "leet hax bro: " << x << endl;
   cout << "0x" << hex << x << endl;  // output in hexadecimal
    cout << "line break\n\n\n";

  printf("printf = %s\n", f);
  //cout << "0x" << hex << (int)f << endl;  // output in hexadecimal
  cout << "ASCII: " << f << endl; // output in ascii
  cout << "line break\n\n\n";


  string zed("coolstorybro");
  cout << &zed << endl;
  printf("zed = %s\n\n\n", zed);

  if(f[0] >= 101){

    cout << "I think I'm getting it.\n\n";
  }else{

    cout << "expected fail\n\n";
  }

  return 0;
}
/*
  // const cstring
  const char a[4] = "cat";
  const char* b = "duh";

  // signed and unsigned integer to hold decimal 
  int d;
  uint e;

    printf("trying it out: %s\n", "weirdtexthere");
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    printf("d = %x\n", d);
    printf("e = %x\n", e);
*/
/*  
  void cstringArrayToHex(const char[], uint32_t tempUint){

    for(int i = 0; i < 2; i++){

      if(tempString[i] >= 32){

        tempInt += tempString[i];
        cout << tempInt << endl;
      }
    }
  }

  // function definition 
  void cstringPointerToHex(const char* tempString, uint32_t tempUint){

    for(int i = 0; i < 4; i++){

      if(tempString[i] >= 32){


      }
    }
  }
*/