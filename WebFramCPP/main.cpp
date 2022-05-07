// Include header <C++>
#include <iostream>
#include <filesystem>

// Include header <Core>
#include <Core.h>

// Include header <Server (Config)>
#include "config/Server.h"

// Include header <Web (Routes)>
#include "app/routes/include/web.h"

// Include header <Directory>
#include <Directory.h>

std::string _dirpath;

// Main
auto main(int argc, const char* argv[]) -> decltype(0) {
	// Setup
	_dirpath = std::filesystem::path(Directory::GetPath("", argv[0]))
		.parent_path()
		.string();
	Core core = Core(Config::ipAddress, Config::port, &Routes::web);
	{
		(void)argc;
		(void)argv;
	}
	return 0;
}