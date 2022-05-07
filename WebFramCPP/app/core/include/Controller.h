#ifndef CONTROLLER_H
#define CONTROLLER_H

// Include header <C++>
#include <string>

// Include header <HTTP>
#include <Http.h>

// Namespace Controller
namespace Controller {
	// Class <Controller>
	class Controller {
	private:
		// Setup
		std::string pathView = "/app/views/";
	
	protected:
		// Reqeuest and Response
		const httplib::Request* Request;
		httplib::Response* Response;

	public:
		// Constructor
		Controller(const httplib::Request* _Request, 
			httplib::Response* _Response);

	protected:
		// View
		void View(std::string path, std::string dir, 
			std::string type = "text/html", bool compression = true);
	};
};

#endif // CONTROLLER_H