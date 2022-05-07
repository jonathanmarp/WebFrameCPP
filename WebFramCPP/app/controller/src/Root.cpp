// Include header <Self>
#include "../include/Root.h"

// Include header <Macro>
#include <Macro.h>

// Include header <C++>
#include <iostream>

extern std::string _dirpath;

// Controller
Controller::Root::Root(const httplib::Request& req, 
	httplib::Response& res) : Controller(&req, &res) {
	this->View("index.html", _dirpath);
}