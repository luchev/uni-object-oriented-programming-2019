#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class File {
public:
	static bool ReadString(const string & FileName, string & Input) {
		ifstream inputFile(FileName, std::ios_base::binary);
		if (inputFile.fail()) {
			return false; // Failed to open file
		}

		if (inputFile.is_open()) {
			char next;
			while (inputFile.get(next)) {
				Input.push_back(next);
			}
		}

		inputFile.close();
		return true; // Successfully read file
	}

	static bool WriteString(const string & FileName, const string & Output) {
		ofstream outputFile(FileName, std::ios_base::binary);
		if (outputFile.fail()) {
			return false; // Failed to open file
		}
		
		outputFile << Output;
		
		outputFile.close();
		return true; // Successfully wrote to file
	}

	static bool AppendString(const string & FileName, const string & Output) {
		ofstream outputFile(FileName, std::ios_base::binary | std::ofstream::app);
		if (outputFile.fail()) { 
			return false; // Failed to open file
		}

		outputFile << Output;
		
		outputFile.close();
		return true; // Successfully wrote to file
	}
};