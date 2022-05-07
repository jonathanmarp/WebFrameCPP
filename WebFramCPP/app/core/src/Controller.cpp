// Include header <Self>
#include "../include/Controller.h"

// Include header <HTTP>
#include <Http.h>

// Include header <C++>
#include <iostream>

// Include header <File>
#include <File.h>

// Include header <Directory>
#include <Directory.h>

// Include header <Compression>
#include <Compression.h>

// Constructor
Controller::Controller::Controller(const httplib::Request* _Request, 
	httplib::Response* _Response) : 
	Request(_Request), Response(_Response) {}

// View
void Controller::Controller::View(std::string path, std::string dir, 
	std::string type, bool compression) {
	// Setup
	std::string data = File(Directory::GetPath(this->pathView + "/" + path, dir))
		.GetAllData();

	// Compress
	if (compression) {
		// Set encoding
		this->Response->set_header("Content-Encoding", "deflate");

		// Compress start
		data = Compression::Compress(data);
	}

	// Set content
	this->Response->set_content(data, "text/html");
}