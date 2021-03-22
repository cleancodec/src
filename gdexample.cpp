#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {

    register_method("a_method", &GDExample::a_method);
}

void GDExample::_init() {
    // initialize any variables here
}

String GDExample::a_method() {

    String text = "Hello World!";

    return text;
}
