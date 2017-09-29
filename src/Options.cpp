#include "Options.h"
#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <fstream>

using namespace std;

Options::Options()
{
	//init
	argC = 0;
	argV = NULL;
	optstring = "";
	count = 1; 			//count is the iterator used to select argV
}

Options::~Options()
{

}

//reads in the valid options from main
void Options::setOptstring(string validopt)
{
	//getopt() can't reset count, so rather here than a explicit function
	count = 0;
	optstring = validopt;
}

//invokes getopt() to count how many options are on cmdline
int Options::numopt(void)
{
	//You can never reset count too often
	count = 0;
	int number = 0;
	while (getopt() != "INVALID")
	{
		number++;
	}
	count = 0;
	return number;
}

void readFile(char* filename)
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
}
