

#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {


    register_method("a_method", &GDExample::a_method);

    register_method("accelerate", &GDExample::accelerate);
    register_method("decelerate", &GDExample::decelerate);

    //register_property<GDExample, float>("BrakePower", &GDExample::set_brake, &GDExample::get_breake, 12000.0);
   // register_property<GDExample, float>("EBrakePower", &GDExample::set_ebrake, &GDExample::get_ebreake, 5000.0);
}


void GDExample::_init() {
  
}

float GDExample::accelerate(float _value) {
    engine_force = _value;
    return engine_force;
}
float GDExample::decelerate(float _value) {
    brake_force = _value * -1;
    return brake_force;
}
float GDExample::a_method() {

       return 1.1 ;

}