#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#if defined(_WIN64)
#include <filesystem>
namespace fs = std::filesystem;
#elif defined(__APPLE__)
#include <filesystem>
namespace fs = std::filesystem;
#elif defined(__linux__)
#include <filesystem>
namespace fs = std::filesystem;
#endif

#endif
