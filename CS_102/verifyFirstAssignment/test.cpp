#include <iostream>
using namespace std;
int main()
{

        string qs = "firstname=noggin&lastname=theCat&language=Java";



        int numberOfEqualSigns = 0;

                        for (int i = 0; i < qs.length(); i++) {
                            if (qs[i] == '='){
                                numberOfEqualSigns++;
                            }
                        }
                        cout << numberOfEqualSigns;





//    cout << "Enter some value :" << endl;
//    cin >> x;


  return 0;
}

