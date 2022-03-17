#ifndef WRITEBASE64TOFILE_H
#define WRITEBASE64TOFILE_H

#include "filesystem.h"

namespace Doppelganger
{
	namespace Util
	{
		void writeBase64ToFile(const std::string &base64Str, const fs::path &destPath);
	};
}

#endif
