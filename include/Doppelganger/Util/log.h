#ifndef LOG_H
#define LOG_H

#include <string>
#include "filesystem.h"

#include <nlohmann/json.hpp>

namespace Doppelganger
{
	namespace Util
	{
		void log(
			const std::string &content,
			const std::string &level,
			const nlohmann::json& config);
		void log(
			const fs::path &path,
			const std::string &level,
			const nlohmann::json& config);
	}
}

#endif
