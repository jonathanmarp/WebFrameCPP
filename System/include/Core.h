#ifndef CORE_H
#define CORE_H

// Include header <C++>
#include <string>
#include <future>
#include <functional>

// Include header <HTTP>
#include "Http.h"

// Include header <Handler>
#include "Handler.h"

// Class <Core>
class Core {
private:
	// IpAddress and Port
	std::string _ipAddress;
	int _port;

	// HTTP
	httplib::Server _server;

	// Handler
	Handler* _handler;

	// Async
	std::future<void> runAsync;
public:
	// Constructor
	Core(std::string ipAddress, int port,
		std::function<void(httplib::Server*)> routes);

private:
	// Run
	void Run();
};

#endif // CORE_H