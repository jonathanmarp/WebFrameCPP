#ifndef CONTROLLER_ROOT_H
#define CONTROLLER_ROOT_H

// Include header <Controller>
#include "../../core/include/Controller.h"

// Include header <Macro>
#include <Macro.h>

// Controller <Root>
namespace Controller {
	// Class <Root>
	class Root : public Controller {
	public:
		// Constructor
		Root(const httplib::Request& req, 
			httplib::Response& res);
	};
};

#endif // CONTROLLER_ROOT_H