#pragma once

#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <iostream>

class Coordinate{
    public:
    int x, y;
    Coordinate(const int& x = 0, const int& y = 0);
    Coordinate operator = (const Coordinate& other);
    bool operator == (const Coordinate& other);
    bool operator < (const Coordinate& other);
    bool operator > (const Coordinate& other);
    bool operator <= (const Coordinate& other);
    bool operator >= (const Coordinate& other);
    Coordinate operator += (const Coordinate& other);
    Coordinate operator -= (const Coordinate& other);
    Coordinate operator *= (const Coordinate& other);
    Coordinate operator /= (const Coordinate& other);
    Coordinate operator + (const Coordinate& other);
    Coordinate operator - (const Coordinate& other);
    Coordinate operator * (const Coordinate& other);
    Coordinate operator / (const Coordinate& other);
    Coordinate operator += (const int& other);
    Coordinate operator -= (const int& other);
    Coordinate operator *= (const int& other);
    Coordinate operator /= (const int& other);
    Coordinate operator + (const int& other);
    Coordinate operator - (const int& other);
    Coordinate operator * (const int& other);
    Coordinate operator / (const int& other);
    float distance(const Coordinate& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Coordinate& _coordinate_);
};

class Size{
    public:
    int width, height;
    Size(const int& width = 0, const int& height = 0);
    Size operator = (const Size& other);
    bool operator == (const Size& other);
    bool operator < (const Size& other);
    bool operator > (const Size& other);
    bool operator <= (const Size& other);
    bool operator >= (const Size& other);
    Size operator += (const Size& other);
    Size operator -= (const Size& other);
    Size operator *= (const Size& other);
    Size operator /= (const Size& other);
    Size operator + (const Size& other);
    Size operator - (const Size& other);
    Size operator * (const Size& other);
    Size operator / (const Size& other);
    Size operator += (const int& other);
    Size operator -= (const int& other);
    Size operator *= (const int& other);
    Size operator /= (const int& other);
    Size operator + (const int& other);
    Size operator - (const int& other);
    Size operator * (const int& other);
    Size operator / (const int& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Size& _size_);
};

class RECTANGLE{
public:
    int x, y, width, height;
    RECTANGLE(const int& x = 0, const int& y = 0, const int& width = 0, const int& height = 0);
    RECTANGLE(const Coordinate& coordinate, const Size& size);
    RECTANGLE operator = (const RECTANGLE& other);
    bool operator == (const RECTANGLE& other);
    bool operator < (const RECTANGLE& other);
    bool operator > (const RECTANGLE& other);
    bool operator <= (const RECTANGLE& other);
    bool operator >= (const RECTANGLE& other);
    RECTANGLE operator += (const RECTANGLE& other);
    RECTANGLE operator -= (const RECTANGLE& other);
    RECTANGLE operator *= (const RECTANGLE& other);
    RECTANGLE operator /= (const RECTANGLE& other);
    RECTANGLE operator + (const RECTANGLE& other);
    RECTANGLE operator - (const RECTANGLE& other);
    RECTANGLE operator * (const RECTANGLE& other);
    RECTANGLE operator / (const RECTANGLE& other);
    RECTANGLE operator += (const int& other);
    RECTANGLE operator -= (const int& other);
    RECTANGLE operator *= (const int& other);
    RECTANGLE operator /= (const int& other);
    RECTANGLE operator + (const int& other);
    RECTANGLE operator - (const int& other);
    RECTANGLE operator * (const int& other);
    RECTANGLE operator / (const int& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const RECTANGLE& _RECTANGLE_);
};

class Vector2{
    public:
    float x, y;
    Vector2(const float& x = 0, const float& y = 0);
    Vector2 operator = (const Vector2& other);
    bool operator == (const Vector2& other);
    bool operator < (const Vector2& other);
    bool operator > (const Vector2& other);
    bool operator <= (const Vector2& other);
    bool operator >= (const Vector2& other);
    Vector2 operator += (const Vector2& other);
    Vector2 operator -= (const Vector2& other);
    Vector2 operator *= (const Vector2& other);
    Vector2 operator /= (const Vector2& other);
    Vector2 operator + (const Vector2& other);
    Vector2 operator - (const Vector2& other);
    Vector2 operator * (const Vector2& other);
    Vector2 operator / (const Vector2& other);
    Vector2 operator += (const float& other);
    Vector2 operator -= (const float& other);
    Vector2 operator *= (const float& other);
    Vector2 operator /= (const float& other);
    Vector2 operator + (const float& other);
    Vector2 operator - (const float& other);
    Vector2 operator * (const float& other);
    Vector2 operator / (const float& other);
    float distance(const Vector2& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Vector2& _vector2_);
};

class Vector3{
    public:
    float x, y, z;
    Vector3(const float& x = 0, const float& y = 0, const float& z = 0);
    Vector3 operator = (const Vector3& other);
    bool operator == (const Vector3& other);
    bool operator < (const Vector3& other);
    bool operator > (const Vector3& other);
    bool operator <= (const Vector3& other);
    bool operator >= (const Vector3& other);
    Vector3 operator += (const Vector3& other);
    Vector3 operator -= (const Vector3& other);
    Vector3 operator *= (const Vector3& other);
    Vector3 operator /= (const Vector3& other);
    Vector3 operator + (const Vector3& other);
    Vector3 operator - (const Vector3& other);
    Vector3 operator * (const Vector3& other);
    Vector3 operator / (const Vector3& other);
    float distance(const Vector3& other);
    Vector3 operator = (const Vector2& other);
    bool operator == (const Vector2& other);
    bool operator < (const Vector2& other);
    bool operator > (const Vector2& other);
    bool operator <= (const Vector2& other);
    bool operator >= (const Vector2& other);
    Vector3 operator += (const Vector2& other);
    Vector3 operator -= (const Vector2& other);
    Vector3 operator *= (const Vector2& other);
    Vector3 operator /= (const Vector2& other);
    Vector3 operator + (const Vector2& other);
    Vector3 operator - (const Vector2& other);
    Vector3 operator * (const Vector2& other);
    Vector3 operator / (const Vector2& other);
    Vector3 operator += (const float& other);
    Vector3 operator -= (const float& other);
    Vector3 operator *= (const float& other);
    Vector3 operator /= (const float& other);
    Vector3 operator + (const float& other);
    Vector3 operator - (const float& other);
    Vector3 operator * (const float& other);
    Vector3 operator / (const float& other);
    float distance(const Vector2& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Vector3& _vector3_);
};

class Color{
    public:
    float r, g, b, a;
    Color(const float& r, const float& g, const float& b, const float& a = 1.0f);
    Color operator = (const Color& other);
    Color operator += (const Color& other);
    Color operator -= (const Color& other);
    Color operator *= (const Color& other);
    Color operator /= (const Color& other);
    Color operator + (const Color& other);
    Color operator - (const Color& other);
    Color operator * (const Color& other);
    Color operator / (const Color& other);
    bool operator < (const Color& other);
    bool operator > (const Color& other);
    bool operator <= (const Color& other);
    bool operator >= (const Color& other);
    bool operator == (const Color& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Color& _color_);
};

#endif