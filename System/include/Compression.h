#ifndef COMPRESSION_H
#define COMPRESSION_H

// Include header <C++>
#include <string>

// Include header <ZLIB>
#include <zlib.h>

// Include header <Macro>
#include "Macro.h"

// Class <Compression>
class Compression {
public:
	// Compress string
	MAYBE_UNUSED static std::string Compress(const std::string& data,
		int compressionlevel = Z_BEST_COMPRESSION);
};

#endif // COMPRESSION_H