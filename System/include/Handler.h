#ifndef HANDLER_H
#define HANDLER_H

// Include header <C++>
#include <string>
#include <functional>

// Include header <HTTP>
#include "Http.h"

// Class <Handler>
class Handler {
private:
	// Server <Ref>
	httplib::Server* _server;

	// Public path
	std::string publicPath = "../public";

public:
	// Constructor
	Handler(httplib::Server* server,
		std::function<void(httplib::Server*)>& routes);
};

#endif // HANDLER_H