#ifndef ROUTE_WEB_H
#define ROUTE_WEB_H

// Include header <HTTP>
#include <Http.h>

// Include header <C++>
#include <string>

namespace Routes {
	// Function web
	void web(httplib::Server* server);
};

#endif // ROUTE_WEB_H