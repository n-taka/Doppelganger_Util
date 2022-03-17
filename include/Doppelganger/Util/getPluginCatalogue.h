#ifndef GETPLUGINCATALOGUE_H
#define GETPLUGINCATALOGUE_H

#include "filesystem.h"

#include <string>
#include <nlohmann/json.hpp>

namespace Doppelganger
{
	namespace Util
	{
		void getPluginCatalogue(
			const fs::path &pluginDir,
			const nlohmann::json &listURLJsonArray,
			nlohmann::json &catalogue);
	}
}

#endif
