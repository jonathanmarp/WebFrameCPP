// Include header <C++>
#include <iostream>
#include <utility>
#include <filesystem>

// Include header <Self>
#include "../include/Directory.h"

// Get path
MAYBE_UNUSED std::string Directory::GetPath(std::string path, std::string dir)
{
	// Return Path
	return std::filesystem::absolute(
		std::filesystem::path(dir).parent_path().string() + "\\" + path)
		.string();
}