#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)
    private:
        float _speed;

    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        void set_data(float speed);
        float get_data() const;

        float a_method();
    };

}

#endif  /* GDEXAMPLE_H */


