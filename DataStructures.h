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
    Coordinate operator = (const int& other);
    Coordinate operator += (const int& other);
    Coordinate operator -= (const int& other);
    Coordinate operator *= (const int& other);
    Coordinate operator /= (const int& other);
    Coordinate operator + (const int& other);
    Coordinate operator - (const int& other);
    Coordinate operator * (const int& other);
    Coordinate operator / (const int& other);
    Coordinate operator = (const float& other);
    Coordinate operator += (const float& other);
    Coordinate operator -= (const float& other);
    Coordinate operator *= (const float& other);
    Coordinate operator /= (const float& other);
    Coordinate operator + (const float& other);
    Coordinate operator - (const float& other);
    Coordinate operator * (const float& other);
    Coordinate operator / (const float& other);
    Coordinate operator = (const double& other);
    Coordinate operator += (const double& other);
    Coordinate operator -= (const double& other);
    Coordinate operator *= (const double& other);
    Coordinate operator /= (const double& other);
    Coordinate operator + (const double& other);
    Coordinate operator - (const double& other);
    Coordinate operator * (const double& other);
    Coordinate operator / (const double& other);
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
    Size operator = (const int& other);
    Size operator += (const int& other);
    Size operator -= (const int& other);
    Size operator *= (const int& other);
    Size operator /= (const int& other);
    Size operator + (const int& other);
    Size operator - (const int& other);
    Size operator * (const int& other);
    Size operator / (const int& other);
    Size operator = (const float& other);
    Size operator += (const float& other);
    Size operator -= (const float& other);
    Size operator *= (const float& other);
    Size operator /= (const float& other);
    Size operator + (const float& other);
    Size operator - (const float& other);
    Size operator * (const float& other);
    Size operator / (const float& other);
    Size operator = (const double& other);
    Size operator += (const double& other);
    Size operator -= (const double& other);
    Size operator *= (const double& other);
    Size operator /= (const double& other);
    Size operator + (const double& other);
    Size operator - (const double& other);
    Size operator * (const double& other);
    Size operator / (const double& other);
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
    RECTANGLE operator = (const int& other);
    RECTANGLE operator += (const int& other);
    RECTANGLE operator -= (const int& other);
    RECTANGLE operator *= (const int& other);
    RECTANGLE operator /= (const int& other);
    RECTANGLE operator + (const int& other);
    RECTANGLE operator - (const int& other);
    RECTANGLE operator * (const int& other);
    RECTANGLE operator / (const int& other);
    RECTANGLE operator = (const float& other);
    RECTANGLE operator += (const float& other);
    RECTANGLE operator -= (const float& other);
    RECTANGLE operator *= (const float& other);
    RECTANGLE operator /= (const float& other);
    RECTANGLE operator + (const float& other);
    RECTANGLE operator - (const float& other);
    RECTANGLE operator * (const float& other);
    RECTANGLE operator / (const float& other);
    RECTANGLE operator = (const double& other);
    RECTANGLE operator += (const double& other);
    RECTANGLE operator -= (const double& other);
    RECTANGLE operator *= (const double& other);
    RECTANGLE operator /= (const double& other);
    RECTANGLE operator + (const double& other);
    RECTANGLE operator - (const double& other);
    RECTANGLE operator * (const double& other);
    RECTANGLE operator / (const double& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const RECTANGLE& _RECTANGLE_);
};

class Vector2{
    public:
    double x, y;
    Vector2(const double& x = 0, const double& y = 0);
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
    Vector2 operator = (const float& other);
    Vector2 operator += (const float& other);
    Vector2 operator -= (const float& other);
    Vector2 operator *= (const float& other);
    Vector2 operator /= (const float& other);
    Vector2 operator + (const float& other);
    Vector2 operator - (const float& other);
    Vector2 operator * (const float& other);
    Vector2 operator / (const float& other);
    Vector2 operator = (const double& other);
    Vector2 operator += (const double& other);
    Vector2 operator -= (const double& other);
    Vector2 operator *= (const double& other);
    Vector2 operator /= (const double& other);
    Vector2 operator + (const double& other);
    Vector2 operator - (const double& other);
    Vector2 operator * (const double& other);
    Vector2 operator / (const double& other);
    Vector2 operator = (const int& other);
    Vector2 operator += (const int& other);
    Vector2 operator -= (const int& other);
    Vector2 operator *= (const int& other);
    Vector2 operator /= (const int& other);
    Vector2 operator + (const int& other);
    Vector2 operator - (const int& other);
    Vector2 operator * (const int& other);
    Vector2 operator / (const int& other);
    double distance(const Vector2& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Vector2& _vector2_);
};

class Vector3{
    public:
    double x, y, z;
    Vector3(const double& x = 0, const double& y = 0, const double& z = 0);
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
    double distance(const Vector3& other);
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
    Vector3 operator = (const float& other);
    Vector3 operator += (const float& other);
    Vector3 operator -= (const float& other);
    Vector3 operator *= (const float& other);
    Vector3 operator /= (const float& other);
    Vector3 operator + (const float& other);
    Vector3 operator - (const float& other);
    Vector3 operator * (const float& other);
    Vector3 operator / (const float& other);
    Vector3 operator = (const double& other);
    Vector3 operator += (const double& other);
    Vector3 operator -= (const double& other);
    Vector3 operator *= (const double& other);
    Vector3 operator /= (const double& other);
    Vector3 operator + (const double& other);
    Vector3 operator - (const double& other);
    Vector3 operator * (const double& other);
    Vector3 operator / (const double& other);
    Vector3 operator = (const int& other);
    Vector3 operator += (const int& other);
    Vector3 operator -= (const int& other);
    Vector3 operator *= (const int& other);
    Vector3 operator /= (const int& other);
    Vector3 operator + (const int& other);
    Vector3 operator - (const int& other);
    Vector3 operator * (const int& other);
    Vector3 operator / (const int& other);
    double distance(const Vector2& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Vector3& _vector3_);
};

class Color{
    public:
    double r, g, b, a;
    Color(const double& r, const double& g, const double& b, const double& a = 1.0f);
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
    Color operator = (const int& other);
    Color operator += (const int& other);
    Color operator -= (const int& other);
    Color operator *= (const int& other);
    Color operator /= (const int& other);
    Color operator + (const int& other);
    Color operator - (const int& other);
    Color operator * (const int& other);
    Color operator / (const int& other);
    Color operator = (const double& other);
    Color operator += (const double& other);
    Color operator -= (const double& other);
    Color operator *= (const double& other);
    Color operator /= (const double& other);
    Color operator + (const double& other);
    Color operator - (const double& other);
    Color operator * (const double& other);
    Color operator / (const double& other);
    Color operator = (const float& other);
    Color operator += (const float& other);
    Color operator -= (const float& other);
    Color operator *= (const float& other);
    Color operator /= (const float& other);
    Color operator + (const float& other);
    Color operator - (const float& other);
    Color operator * (const float& other);
    Color operator / (const float& other);
    friend std::ostream& operator << (std::ostream& _ostream_, const Color& _color_);
};

#endif