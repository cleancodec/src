

#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {


    register_method("a_method", &GDExample::a_method);

    //register_property<GDExample, String>("data", &GDExample::_data, String("Hello World"));
    //register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.0);  

    //register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.0);
    register_property<GDExample, float>("BrakePower", &GDExample::set_brake, &GDExample::get_breake, 12000.0);
    register_property<GDExample, float>("EBrakePower", &GDExample::set_ebrake, &GDExample::get_ebreake, 5000.0);

}

void GDExample::_init() {

    /*
    time_passed = 0.0; //
    amplitude = 10.0;   //
    */
}

void GDExample::set_brake(float _brakePower) {
    BrakePower = _brakePower;
}
float GDExample::get_breake() const {
    return BrakePower ;
}
void GDExample::set_ebrake(float _ebrakePower) {
    EBrakePower = _ebrakePower;
}
float GDExample::get_ebreake() const {
    return EBrakePower;
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
       return EBrakePower ;
}