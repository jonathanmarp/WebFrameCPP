// Include header <Self>
#include "../app/routes/include/web.h"

// Include header <HTTP>
#include <Http.h>

// Include header <Macro>
#include <Macro.h>

// Include header <Controller>
#include "../app/controller/include/Root.h"

// Function web
void Routes::web(httplib::Server* server) {
	// Root
	server->Get("/", FUNCTION_HTTP(req, res) {
		Controller::Root root = Controller::Root(req, res);
	});

	server->set_error_handler([](const auto& req, auto& res) {
		auto fmt = "<p>Error Status: <span style='color:red;'>%d</span></p>";
		char buf[BUFSIZ];
		snprintf(buf, sizeof(buf), fmt, res.status);
		res.set_content(buf, "text/html");
	});
}