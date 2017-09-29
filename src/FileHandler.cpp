#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "FileHandler.h"
using namespace std;

FileHandler::FileHandler()
{
	filename = NULL;
}

FileHandler::~FileHandler()
{

}

void FileHandler::setFileName(char* file_user)
{
	filename = file_user;
}

void FileHandler::readFile()
{
	cout << "going to read from the newly written file" << endl;
	// ifstream is the counterpart of ofstream
	//ifstream infile ("./example.txt");
	ifstream infile(filename);
	if (infile.is_open())
	{
		// we need a buffer, but don't know how big. Find out
		infile.seekg(0, ios::end);
		// Now the read pointer are at the end of the file, i.e. tellg will
		// tell us the position which is equal to the length.
		int len = infile.tellg();
		// Go to the beginning again
		infile.seekg(0, ios::beg);
		cout << "there are " << len << " bytes in the file" << endl;

		// Allocate the buffer
		char *buf = new char[len];
		// Read from the file into the buffer
		infile.read(buf, len);
		infile.close();
		cout << "This was read from the file: " << endl << buf << endl;
		// Deliver back what you borrowed
		delete[] buf;
		return;
	}
	else
	{
		cout << "was not able to open the file for reading" << endl;
		return;
	}

	cout << "was not able to open the file for writing" << endl;
	return;
}
