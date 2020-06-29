#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Engine {


	class ENG_API Log {


	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCorelogger() { return s_coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientlogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};

}

//CORE LOG MACROS
#define ENG_CORE_ERROR(...) ::Engine::Log::GetCorelogger()->error(__VA_ARGS__)
#define ENG_CORE_WARN(...)  ::Engine::Log::GetCorelogger()->warn(__VA_ARGS__)
#define ENG_CORE_INFO(...)  ::Engine::Log::GetCorelogger()->info(__VA_ARGS__)
#define ENG_CORE_TRACE(...) ::Engine::Log::GetCorelogger()->trace(__VA_ARGS__)
#define ENG_CORE_FATAL(...) ::Engine::Log::GetCorelogger()->fatal(__VA_ARGS__)



//CLIENT LOG MACROS
#define ENG_ERROR(...) ::Engine::Log::GetClientlogger()->error(__VA_ARGS__)
#define ENG_WARN(...)  ::Engine::Log::GetClientlogger()->warn(__VA_ARGS__)
#define ENG_INFO(...)  ::Engine::Log::GetClientlogger()->info(__VA_ARGS__)
#define ENG_TRACE(...) ::Engine::Log::GetClientlogger()->trace(__VA_ARGS__)
#define ENG_FATAL(...) ::Engine::Log::GetClientlogger()->fatal(__VA_ARGS__)

