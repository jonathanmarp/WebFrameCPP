#ifndef LOG_H
#define LOG_H

// Include header <C++>
#include <ctime>
#include <string>

// Include header <Macro>
#include "Macro.h"

// Class <Log>
class Log {
public:
	// Struct
	enum Type {
		Default,
		Warning,
		Error
	};

private:
	// Time
	inline static std::time_t time;

public:
	// Show
	MAYBE_UNUSED static void Show(Log::Type type, std::string message);
};

#endif // LOG_H