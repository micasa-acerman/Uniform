#pragma once

#include <uniform/platform/platform.hpp>

#include <uniform/core/os/keyboard.hpp>
#include <uniform/core/os/mouse.hpp>

#include <uniform/core/math/point2.hpp>
#include <uniform/core/math/size2.hpp>

#include <string>

namespace Uniform
{
    class UNIFORM_API VideoMode
    {
    public:

        VideoMode(const int mode_width, const int mode_height);

        int width, height;

    };

    class UNIFORM_API Window
    {
    private:

        struct Handle;

    public:

        enum Style : unsigned
        {
            Resizable = 1 << 0,
            Maximized = 1 << 1,
            Floating = 1 << 2
        };

        Window(const std::string title, const VideoMode mode, const unsigned style);
        virtual ~Window();

        Size2i get_size() const;
        void set_size(Size2i size);

        Point2i get_position() const;
        void set_position(Point2i point);

        bool is_vsync() const;
        void set_vsync(bool enabled);

        void *get_handle();

    private:

        Handle *_window;

        std::string _title;
        bool _vsync;

        mutable VideoMode _mode;

    protected:

        void swap_buffers();
        bool poll_events();

        Keyboard::Action keyboard_pressed(Keyboard::Code code);

        virtual void OnKeyboardPress(
            const Keyboard::Code,
            const Keyboard::Action
        ) { }

        virtual void OnMousePress(
            const Mouse::Code,
            const Mouse::Action
        ) { }

        virtual void OnMouseMove(const Point2i) { }

        virtual void OnWindowMove(const Point2i) { }
        virtual void OnWindowResize(const Size2i) { }

    };
}