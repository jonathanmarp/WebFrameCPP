#ifndef FILE_H
#define FILE_H

// Include header <C++>
#include <fstream>
#include <string>

// Class <File>
class File {
private:
	// Variable <std::fstream>
	std::fstream _file;

	// Variable string
	std::string _path;

public:
	// Constructor
	File(std::string path);

public:
	// Get all file
	std::string GetAllData();
};

#endif // FILE_H