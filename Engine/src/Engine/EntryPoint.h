#pragma once

#ifdef ENG_PLATFORM_WINDOWS

extern Engine::Application* Engine::createApplication();

int main(int argc, char** argv) {
	
	Engine::Log::init();
	ENG_CORE_WARN("Testing warn log!");
	int x = 23;
	ENG_INFO("Hello you have {0} years old", x);
	auto app = Engine::createApplication();
	app->run();
	delete app;
}

#endif