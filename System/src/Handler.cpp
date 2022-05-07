// Include header <C++>
#include <utility>
#include <iostream>

// Include header <Self>
#include "../include/Handler.h"

// Include header <Directory>
#include "../include/Directory.h"

extern std::string _dirpath;

// Constructor
Handler::Handler(httplib::Server* server,
	std::function<void(httplib::Server*)>& routes)
	: _server(server)
{
	// Get handler
	this->_server->set_mount_point("/", 
		Directory::GetPath("/public", _dirpath));

	// Call handler
	routes(this->_server);
}