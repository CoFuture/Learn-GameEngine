#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox() {};
	~Sandbox() {};

private:

};

//Sandbox: public Hazel::Application::Sandbox()
//{
//}
//
//Sandbox: public Hazel::Application::~Sandbox()
//{
//
//}

//void main() {
//	Sandbox* sandbox = new Sandbox();
//	sandbox->Run();
//	delete sandbox;
//}

Hazel::Application* Hazel::CreateApplication () {
	return new Sandbox();
}