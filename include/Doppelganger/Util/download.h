#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include "filesystem.h"

namespace Doppelganger
{
	namespace Util
	{
		bool download(const std::string &targetUrl, const fs::path &destPath);
	};
} // namespace

#endif
