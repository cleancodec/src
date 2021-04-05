

#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {


    register_method("a_method", &GDExample::a_method);

    //register_property<GDExample, String>("data", &GDExample::_data, String("Hello World"));
    //register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.0);  

    register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.0);

}

void GDExample::_init() {


    time_passed = 0.0; //
    amplitude = 10.0;   //
}

void GDExample::set_data(String new_data) {
    _data = new_data;
}
String GDExample::get_data() const {
    return _data;
}
/*
String GDExample::a_method() {

    return _data;
}
*/

String GDExample::a_method(float delta) {

    time_passed += delta;

    Vector2 new_position = Vector2(
        amplitude + (amplitude * sin(time_passed * 2.0)),
        amplitude + (amplitude * cos(time_passed * 1.5))
    );

    return new_position;
}