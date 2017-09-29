#ifndef FILEHANDLER_H
#define FILEHANDLER_H

class FileHandler
{
public:
	FileHandler();
	virtual ~FileHandler();
	void readFile();
	void setFileName(char* file_user);

protected:
	//protected vars are inherrited as private
	char* filename;	//optstring is to be tested against in getopt()
};

#endif
