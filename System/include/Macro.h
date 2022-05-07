#ifndef MACRO_H
#define MACRO_H

// Include header <Http>
#include <Http.h>

// Include header <C++>
#include <string>

// maybe unused
#define MAYBE_UNUSED [[maybe_unused]]

// Macro for FUNCTION HTTP
#define FUNCTION_HTTP(nameReq, nameRes) \
	[&](const httplib::Request& nameReq, httplib::Response& nameRes)

#endif // MACRO_H