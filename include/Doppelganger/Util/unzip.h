#ifndef UNZIP_H
#define UNZIP_H

#include "filesystem.h"

namespace Doppelganger
{
	namespace Util
	{
		void unzip(const fs::path &zipPath, const fs::path &destPath);
	};
} // namespace

#endif
