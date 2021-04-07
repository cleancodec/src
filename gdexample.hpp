#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)
    private:

        //editor varibales
        float BrakePower;
        float EBrakePower;

        float mass;
        float InertiaScale;

        float Velocity;
        float Acceleration;

        // Private vars
        float HeadingAngle;
        float AbsoluteVelocity;
        float AngularVelocity;
        float SteerDirection;
        float SteerAngle;

        float Throttle;


        // Variables that get initialized via code
        float Inertia = 1;
        float WheelBase = 1;
        float TrackWidth = 1;

        

    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        void set_brake(float _brakePower);
        float get_breake() const;

        void set_ebrake(float _ebrakePower);
        float get_ebreake() const;

        String change_throttle(float _value);


        float a_method();
    };

}

#endif  /* GDEXAMPLE_H */


