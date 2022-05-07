// Include header <C++>
#include <iostream>
#include <utility>

// Include header <Self>
#include "../include/File.h"

// Include header <Directory>
#include "../include/Directory.h"

// Constructor
File::File(std::string path) : _path(std::move(path)) {}

// Get all file
std::string File::GetAllData() {
	// Setup
	std::string data = "";

	// Open file
	this->_file.open(this->_path, std::ios::in);

	// Check file
	if (this->_file.is_open()) {
		// start read
		while (!this->_file.eof()) {
			// Buffer
			std::string buffer;

			// Get line
			std::getline(this->_file, buffer);

			// Push line
			data += buffer + "\n";
		}
	}

	// Close file
	this->_file.close();

	// return data
	return data;
}