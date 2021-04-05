#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)
    private:

        float BrakePower;
        float EBrakePower;


    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        void set_brake(float _brakePower);
        float get_breake() const;

        void set_ebrake(float _ebrakePower);
        float get_ebreake() const;

        float a_method();
    };

}

#endif  /* GDEXAMPLE_H */


