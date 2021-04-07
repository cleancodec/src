#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

typedef float real_t;

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)
    private:
    
        real_t engine_force = 0.0;
        real_t brake_force = 0.0;

    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        float accelerate(float _value);
        float decelerate(float _value);

        float a_method();
    };

}

#endif  /* GDEXAMPLE_H */


