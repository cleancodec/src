#ifndef GDEXAMPLE_H
#define GDEXAMPLE_HPP

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

    class GDExample : public Node {
        GODOT_CLASS(GDExample, Node)
    private:
        String _data;
        float time_passed;
        float amplitude;

    public:
        static void _register_methods();


        void _init(); // our initializer called by Godot

        void set_data(String new_data);
        String get_data() const;

        String a_method(float delta);
    };

}

#endif  /* GDEXAMPLE_H */


