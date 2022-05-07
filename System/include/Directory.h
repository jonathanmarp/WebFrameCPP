#ifndef DIRECTORY_H
#define DIRECTORY_H

// Include header <C++>
#include <string>

// Include header <Macro>
#include "Macro.h"

// Class <Directory>
class Directory {
public:
	// Get path
	MAYBE_UNUSED static std::string GetPath(std::string path, 
		std::string dir);
};

#endif // DIRECTORY_H