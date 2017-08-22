#pragma once

#include "../Bridge/WebRendererQuery.hpp"

namespace Web::Ui::WebForge
{
	void ShowObjectProperties(uint32_t objectIndex);
	Anvil::Client::Rendering::Bridge::QueryError ProcessAction(const rapidjson::Value &p_Args, std::string *p_Result);
}