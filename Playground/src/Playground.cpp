#include <Engine.h>


class Playground : public Engine::Application {


public:

	Playground() {



	}

	~Playground() {

	}
};


Engine::Application* Engine::createApplication() {

	return new Playground();

}