// Include header <C++>
#include <iostream>

// Include header <Self>
#include "../include/Core.h"

// Include header <Log>
#include "../include/Log.h"

extern std::string _dirpath;

// Constructor
Core::Core(std::string ipAddress, int port,
	std::function<void(httplib::Server*)> routes)
	: _ipAddress(std::move(ipAddress)), _port(std::move(port))
{
	// Setup
	// Intialize handler
	this->_handler = new Handler(&this->_server, routes);

	// Call Run
	this->Run();

	// Show message
	Log::Show(Log::Type::Default, "Port running on: " + 
		std::to_string(_port));

	// Wait
	this->runAsync.wait();
}

// Run
void Core::Run() {
	// Run Server
	this->runAsync = std::async(std::launch::async, [&]() -> void {
		// Run
		this->_server.listen(this->_ipAddress.c_str(), this->_port);
	});
}