void fileIO::readFromFile(fstream &fileObject, string fileName, string array[]){

		fileObject.open(fileName, ios::in | ios::out);
		if(fileObject){
/*
			fileObject.seekg(0, fileObject.end);
			int fileLength = fileObject.tellg();
			fileObject.seekg(0, fileObject.beg);
*/
			int fileLength;
			vector<string> vbuffer;

			fileObject >> fileLength;

			// create a buffer
			string * buffer = new string[fileLength];

			cout << fileLength << endl;

			for (int i = 0; i < fileLength/5.7; ++i){

				fileObject >> buffer[i];
				vbuffer.push_back(buffer[i]);
			}

			tokenizeArray(buffer);

			fileObject.close();
			delete[] buffer;


		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	
	void fileIO::tokenizeDataSet(string& str, vector<string>& vect, char delim){
	//do
		int tokenStart = 0; // starting pos of the next token

		// find the first occurrence of the delimeiter
		int delimPosition = 0;
		delimPosition = str.find(delim);

		// while we havent run out of delimiters...
		//while(delimPosition != string::npos){
		if(delimPosition > 0){

			// extract the token
			string tok = str.substr(tokenStart, delimPosition - tokenStart);

			// push the token onto the tokens vector
			vect.push_back(tok);
			// move delimPosition to the next character position
			delimPosition++;

			// move tokenStart to delimPosition
			tokenStart = delimPosition;

			}else if(delimPosition == 0){

				tokenStart++;

				// extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the tokens vector			
				vect.push_back(tok);

				// move delimPosition to the next character position
				delimPosition++;

				// move tokenStart to delimPosition
				tokenStart = delimPosition;

			}else if(delimPosition == string::npos){

				//extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the vector			
			vect.push_back(tok);
			}
		//while();	
		//}
	}
