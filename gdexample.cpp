

#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {


    register_method("a_method", &GDExample::a_method);

    //register_property<GDExample, String>("data", &GDExample::_data, String("Hello World"));
    //register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.0);  

    //register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.0);
    register_property<GDExample, float>("speed", &GDExample::set_data, &GDExample::get_data, 1.0);

}

void GDExample::_init() {

    float _speed = 0.0;

    /*
    time_passed = 0.0; //
    amplitude = 10.0;   //
    */
}

void GDExample::set_data(float speed) {
    _speed = speed;
}
float GDExample::get_data() const {
    return _speed;
}
/*
String GDExample::a_method() {

    return _data;
}
*/

float GDExample::a_method() {

    
    /*time_passed += delta;

    Vector2 new_position = Vector2(
        amplitude + (amplitude * sin(time_passed * 2.0)),
        amplitude + (amplitude * cos(time_passed * 1.5))
    );

    */
    _speed = _speed + 1;
    return _speed;
}