#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

typedef float real_t;

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)
    private:
    
        real_t _angle = 0.0;

    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        float right(float _value);
        float left(float _value);

        float a_method();
    };

}

#endif  /* GDEXAMPLE_H */


