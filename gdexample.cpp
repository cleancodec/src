

#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {


    register_method("a_method", &GDExample::a_method);

    register_method("right", &GDExample::right);
    register_method("left", &GDExample::left);

    //register_property<GDExample, float>("BrakePower", &GDExample::set_brake, &GDExample::get_breake, 12000.0);
   // register_property<GDExample, float>("EBrakePower", &GDExample::set_ebrake, &GDExample::get_ebreake, 5000.0);
}


void GDExample::_init() {
  
}

float GDExample::right(float _value) {
    _angle = (_value * (180.0 / 3.141592653589793238463)) + 30.0;
    return _angle;
}
float GDExample::left(float _value) {
    _angle = (_value * (180.0 / 3.141592653589793238463)) - 30.0;
    return _angle;
}
float GDExample::a_method() {

       return 1.0 ;

}