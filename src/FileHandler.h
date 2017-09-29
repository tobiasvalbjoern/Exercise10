#ifndef FILEHANDLER_H
#define FILEHANDLER_H

class FileHandler
{
public:
	FileHandler();
	virtual ~FileHandler();
	void setFileName(char* file_user);
	void writeLog();
	void readFile();


protected:
	//protected vars are inherrited as private
	char* filename;	//optstring is to be tested against in getopt()
};

#endif
