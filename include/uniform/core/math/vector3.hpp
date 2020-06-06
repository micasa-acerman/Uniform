#pragma once

namespace Uniform
{
    template <class _type>
    class Vector3
    {
    public:

        _type x, y, z;

        Vector3() : x(_type()), y(_type()), z(_type()) { }
        Vector3(_type x, _type y, _type z) : x(x), y(y), z(z) { }

    };

    typedef Vector3<unsigned> Vector3u;
    typedef Vector3<int>      Vector3i;
    typedef Vector3<float>    Vector3f;

    template <class _type>
    Vector3<_type> operator+(Vector3<_type> &left, Vector3<_type> &right) {
        return Vector3<_type>(left.x + right.x, left.y + right.y, left.z + right.z);
    }

    template <class _type>
    Vector3<_type> operator+(Vector3<_type> &left, const _type right) {
        return Vector3<_type>(left.x + right, left.y + right, left.z + right);
    }

    template <class _type>
    void operator+=(Vector3<_type> &left, Vector3<_type> &right) {
        left = left + right;
    }

    template <class _type>
    void operator+=(Vector3<_type> &left, const _type right) {
        left = left + right;
    }

    template <class _type>
    Vector3<_type> operator-(Vector3<_type> &left, Vector3<_type> &right) {
        return Vector3<_type>(left.x - right.x, left.y - right.y, left.z - right.z);
    }

    template <class _type>
    Vector3<_type> operator-(Vector3<_type> &left, const _type right) {
        return Vector3<_type>(left.x - right, left.y - right, left.z - right);
    }

    template <class _type>
    void operator-=(Vector3<_type> &left, Vector3<_type> &right) {
        left = left - right;
    }

    template <class _type>
    void operator-=(Vector3<_type> &left, const _type right) {
        left = left - right;
    }

    template <class _type>
    Vector3<_type> operator*(Vector3<_type> &left, Vector3<_type> &right) {
        return Vector3<_type>(left.x * right.x, left.y * right.y, left.z * right.z);
    }

    template <class _type>
    Vector3<_type> operator*(Vector3<_type> &left, const _type right) {
        return Vector3<_type>(left.x * right, left.y * right, left.z * right);
    }

    template <class _type>
    void operator*=(Vector3<_type> &left, Vector3<_type> &right) {
        left = left * right;
    }

    template <class _type>
    void operator*=(Vector3<_type> &left, const _type right) {
        left = left * right;
    }

    template <class _type>
    Vector3<_type> operator/(Vector3<_type> &left, Vector3<_type> &right) {
        return Vector3<_type>(left.x / right.x, left.y / right.y, left.z / right.z);
    }

    template <class _type>
    Vector3<_type> operator/(Vector3<_type> &left, const _type right) {
        return Vector3<_type>(left.x / right, left.y / right, left.z / right);
    }

    template <class _type>
    void operator/=(Vector3<_type> &left, Vector3<_type> &right) {
        left = left / right;
    }

    template <class _type>
    void operator/=(Vector3<_type> &left, const _type right) {
        left = left / right;
    }
}