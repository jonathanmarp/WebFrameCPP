// Include header <C++>
#include <iostream>

// Include header <Self>
#include "../include/Log.h"

// Include header <Macro>
#include "../include/Macro.h"

MAYBE_UNUSED void Log::Show(Log::Type type, std::string message) {
	// Update time
	Log::time = std::time(0);

	// Get localtime
	std::tm now;
	localtime_s(&now, &Log::time);

	// Setup
	std::cout << "[";

	// Switch type
	switch (type) {
		case Log::Type::Default: {
			std::cout << "Default";
		} break;

		case Log::Type::Warning: {
			std::cout << "Warning";
		} break;

		case Log::Type::Error: {
			std::cout << "Error";
		} break;

		default: {
			std::cout << "Unknow";
		} break;
	}
	
	// Put time
	std::cout << " | " << (now.tm_year + 1900) << '-';
	std::cout << (now.tm_mon + 1) << '-';
	std::cout << now.tm_mday << "] : " << message << std::endl;
}