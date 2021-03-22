#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)

    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        String a_method();
    };

}

#endif  /* GDEXAMPLE_H */