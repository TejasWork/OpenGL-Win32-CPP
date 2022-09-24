#include "DataStructures.h"
#include <math.h>
using namespace std;

Vector2::Vector2(const float& x, const float& y)
{
    this->x = x;
    this->y = y;
}

Vector2 Vector2::operator = (const Vector2& other)
{
    this->x = other.x;
    this->y = other.y;
    return Vector2(this->x, this->y);
}

bool Vector2::operator == (const Vector2& other)
{
    return this->x == other.x && this->y == other.y;
}

bool Vector2::operator < (const Vector2& other){
    return this->x < other.x && this->y < other.y;
}

bool Vector2::operator > (const Vector2& other){
    return this->x > other.x && this->y > other.y;
}

bool Vector2::operator <= (const Vector2& other){
    return this->x <= other.x && this->y <= other.y;
}

bool Vector2::operator >= (const Vector2& other){
    return this->x >= other.x && this->y >= other.y;
}

Vector2 Vector2::operator += (const Vector2& other)
{
    this->x += other.x;
    this->y += other.y;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator -= (const Vector2& other)
{
    this->x -= other.x;
    this->y -= other.y;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator *= (const Vector2& other)
{
    this->x *= other.x;
    this->y *= other.y;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator /= (const Vector2& other)
{
    this->x /= other.x;
    this->y /= other.y;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator + (const Vector2& other)
{
    return Vector2(this->x + other.x, this->y + other.y);
}

Vector2 Vector2::operator - (const Vector2& other)
{
    return Vector2(this->x - other.x, this->y - other.y);
}

Vector2 Vector2::operator * (const Vector2& other)
{
    return Vector2(this->x * other.x, this->y * other.y);
}

Vector2 Vector2::operator / (const Vector2& other)
{
    return Vector2(this->x / other.x, this->y / other.y);
}

Vector2 Vector2::operator += (const float& other)
{
    this->x += other;
    this->y += other;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator -= (const float& other)
{
    this->x -= other;
    this->y -= other;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator *= (const float& other)
{
    this->x *= other;
    this->y *= other;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator /= (const float& other)
{
    this->x /= other;
    this->y /= other;
    return Vector2(this->x, this->y);
}

Vector2 Vector2::operator + (const float& other)
{
    return Vector2(this->x + other, this->y + other);
}

Vector2 Vector2::operator - (const float& other)
{
    return Vector2(this->x - other, this->y - other);
}

Vector2 Vector2::operator * (const float& other)
{
    return Vector2(this->x * other, this->y * other);
}

Vector2 Vector2::operator / (const float& other)
{
    return Vector2(this->x / other, this->y / other);
}

float Vector2::distance(const Vector2& other){
    return sqrt(pow(other.x - this->x, 2) + pow(other.y - this->y, 2));
}

std::ostream& operator << (std::ostream& _ostream_, const Vector2& _vector2_){
    _ostream_ << _vector2_.x << " " << _vector2_.y;
    return _ostream_;
}

Vector3::Vector3(const float& x, const float& y, const float& z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector3 Vector3::operator = (const Vector3& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator = (const Vector2& other)
{
    this->x = other.x;
    this->y = other.y;
    return Vector3(this->x, this->y, this->z);
}

bool Vector3::operator == (const Vector3& other)
{
    return this->x == other.x && this->y == other.y && this->z == other.z;
}

bool Vector3::operator == (const Vector2& other)
{
    return this->x == other.x && this->y == other.y;
}

bool Vector3::operator < (const Vector3& other){
    return this->x < other.x && this->y < other.y && this->z < other.z;
}

bool Vector3::operator < (const Vector2& other){
    return this->x < other.x && this->y < other.y;
}

bool Vector3::operator > (const Vector3& other){
    return this->x > other.x && this->y > other.y && this->z > other.z;
}

bool Vector3::operator > (const Vector2& other){
    return this->x > other.x && this->y > other.y;
}

bool Vector3::operator <= (const Vector3& other){
    return this->x <= other.x && this->y <= other.y && this->z <= other.z;
}

bool Vector3::operator <= (const Vector2& other){
    return this->x <= other.x && this->y <= other.y;
}

bool Vector3::operator >= (const Vector3& other){
    return this->x >= other.x && this->y >= other.y && this->z >= other.z;
}

bool Vector3::operator >= (const Vector2& other){
    return this->x >= other.x && this->y >= other.y;
}

Vector3 Vector3::operator += (const Vector3& other)
{
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator += (const float& other)
{
    this->x += other;
    this->y += other;
    this->z += other;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator += (const Vector2& other)
{
    this->x += other.x;
    this->y += other.y;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator -= (const Vector3& other)
{
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator -= (const float& other)
{
    this->x -= other;
    this->y -= other;
    this->z -= other;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator -= (const Vector2& other)
{
    this->x -= other.x;
    this->y -= other.y;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator *= (const Vector3& other)
{
    this->x *= other.x;
    this->y *= other.y;
    this->z *= other.z;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator *= (const float& other)
{
    this->x *= other;
    this->y *= other;
    this->z *= other;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator *= (const Vector2& other)
{
    this->x *= other.x;
    this->y *= other.y;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator /= (const Vector3& other)
{
    this->x /= other.x;
    this->y /= other.y;
    this->z /= other.z;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator /= (const float& other)
{
    this->x /= other;
    this->y /= other;
    this->z /= other;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator /= (const Vector2& other)
{
    this->x /= other.x;
    this->y /= other.y;
    return Vector3(this->x, this->y, this->z);
}

Vector3 Vector3::operator + (const Vector3& other)
{
    return Vector3(this->x + other.x, this->y + other.y, this->z + other.z);
}

Vector3 Vector3::operator + (const float& other)
{
    return Vector3(this->x + other, this->y + other, this->z + other);
}

Vector3 Vector3::operator + (const Vector2& other)
{
    return Vector3(this->x + other.x, this->y + other.y);
}

Vector3 Vector3::operator - (const Vector3& other)
{
    return Vector3(this->x - other.x, this->y - other.y, this->z - other.z);
}

Vector3 Vector3::operator - (const float& other)
{
    return Vector3(this->x - other, this->y - other, this->z - other);
}

Vector3 Vector3::operator - (const Vector2& other)
{
    return Vector3(this->x - other.x, this->y - other.y);
}

Vector3 Vector3::operator * (const Vector3& other)
{
    return Vector3(this->x * other.x, this->y * other.y, this->z * other.z);
}

Vector3 Vector3::operator * (const float& other)
{
    return Vector3(this->x * other, this->y * other, this->z * other);
}

Vector3 Vector3::operator * (const Vector2& other)
{
    return Vector3(this->x * other.x, this->y * other.y);
}

Vector3 Vector3::operator / (const Vector3& other)
{
    return Vector3(this->x / other.x, this->y / other.y, this->z / other.z);
}

Vector3 Vector3::operator / (const float& other)
{
    return Vector3(this->x / other, this->y / other, this->z / other);
}

Vector3 Vector3::operator / (const Vector2& other)
{
    return Vector3(this->x / other.x, this->y / other.y);
}

float Vector3::distance(const Vector3& other){
    return sqrt(pow(other.x - this->x, 2) + pow(other.y - this->y, 2) + pow(other.z - this->z, 2));
}

float Vector3::distance(const Vector2& other){
    return sqrt(pow(other.x - this->x, 2) + pow(other.y - this->y, 2));
}

std::ostream& operator << (std::ostream& _ostream_, const Vector3& _vector3_){
    _ostream_ << _vector3_.x << " " << _vector3_.y << " "<<_vector3_.z;
    return _ostream_;
}

Color::Color(const float& r, const float& g, const float& b, const float& a){
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

Color Color::operator = (const Color& other){
    this->r = other.r;
    this->g = other.g;
    this->b = other.b;
    this->a = other.a;
    return Color(this->r, this->g, this->b, this->a);
}

Color Color::operator += (const Color& other){
    this->r += other.r;
    this->b += other.b;
    this->a += other.a;
    this->g += other.g;
    return Color(this->r, this->g, this->b, this->a);
}

Color Color::operator -= (const Color& other){
    this->r -= other.r;
    this->g -= other.g;
    this->b -= other.b;
    this->a -= other.a;
    return Color(this->r, this->g, this->b, this->a);
}

Color Color::operator *= (const Color& other){
    this->r *= other.r;
    this->g *= other.g;
    this->b *= other.b;
    this->a *= other.a;
    return Color(this->r, this->g, this->b, this->a);
}

Color Color::operator /= (const Color& other){
    this->r /= other.r;
    this->g /= other.g;
    this->b /= other.b;
    this->a /= other.a;
    return Color(this->r, this->g, this->b, this->a);
}

Color Color::operator + (const Color& other){
    return Color(this->r + other.r, this->g + other.g, this->b + other.b, this->a + other.a);
}

Color Color::operator - (const Color& other){
    return Color(this->r - other.r, this->g - other.g, this->b - other.b, this->a - other.a);
}

Color Color::operator * (const Color& other){
    return Color(this->r * other.r, this->g * other.g, this->b * other.b, this->a * other.a);
}

Color Color::operator / (const Color& other){
    return Color(this->r / other.r, this->g / other.g, this->b / other.b, this->a / other.a);
}

bool Color::operator < (const Color& other){
    return this->r < other.r && this->g < other.g && this->b < other.b && this->a < other.a;
}

bool Color::operator > (const Color& other){
    return this->r > other.r && this->g > other.g && this->b > other.b && this->a > other.a;
}

bool Color::operator <= (const Color& other){
    return this->r <= other.r && this->g <= other.g && this->b <= other.b && this->a <= other.a;
}

bool Color::operator >= (const Color& other){
    return this->r >= other.r && this->g >= other.g && this->b > other.b && this->a > other.a;
}

bool Color::operator == (const Color& other){
    return this->r == other.r && this->g == other.g && this->b == other.b && this->a == other.a;
}

std::ostream& operator << (std::ostream& _ostream_, const Color& _color_){
    _ostream_ << _color_.r << " " << _color_.g << " " << _color_.b << " " << _color_.a;
    return _ostream_;
}

Size::Size(const int& width, const int& height){
    this->width = width;
    this->height = height;
}

Size Size::operator = (const Size& other){
    this->width = other.width;
    this->height = other.height;
    return Size(this->width, this->height);
}

bool Size::operator == (const Size& other){
    return this->width == other.width && this->height == other.height;
}

bool Size::operator < (const Size& other){
    return this->width < other.width && this->height < other.height;
}

bool Size::operator > (const Size& other){
    return this->width > other.width && this->height > other.height;
}

bool Size::operator <= (const Size& other){
    return this->width <= other.width && this->height <= other.height;
}

bool Size::operator >= (const Size& other){
    return this->width >= other.width && this->height >= other.height;
}

Size Size::operator += (const Size& other){
    this->width += other.width;
    this->height += other.height;
    return Size(this->width, this->height);
}

Size Size::operator -= (const Size& other){
    this->width -= other.width;
    this->height -= other.height;
    return Size(this->width, this->height);
}

Size Size::operator *= (const Size& other){
    this->width *= other.width;
    this->height *= other.height;
    return Size(this->width, this->height);
}

Size Size::operator /= (const Size& other){
    this->width /= other.width;
    this->height /= other.height;
    return Size(this->width, this->height);
}

Size Size::operator + (const Size& other){
    return Size(this->width + other.width, this->height + other.height);
}

Size Size::operator - (const Size& other){
    return Size(this->width - other.width, this->height - other.height);
}

Size Size::operator * (const Size& other){
    return Size(this->width * other.width, this->height * other.height);
}

Size Size::operator / (const Size& other){
    return Size(this->width / other.width, this->height / other.height);
}

Size Size::operator += (const int& other){
    this->width += other;
    this->height += other;
    return Size(this->width, this->height);
}

Size Size::operator -= (const int& other){
    this->width -= other;
    this->height -= other;
    return Size(this->width, this->height);
}

Size Size::operator *= (const int& other){
    this->width *= other;
    this->height *= other;
    return Size(this->width, this->height);
}

Size Size::operator /= (const int& other){
    this->width /= other;
    this->height /= other;
    return Size(this->width, this->height);
}

Size Size::operator + (const int& other){
    return Size(this->width + other, this->height + other);
}

Size Size::operator - (const int& other){
    return Size(this->width - other, this->height - other);
}

Size Size::operator * (const int& other){
    return Size(this->width * other, this->height * other);
}

Size Size::operator / (const int& other){
    return Size(this->width / other, this->height / other);
}

std::ostream& operator << (std::ostream& _ostream_, const Size& _size_){
    _ostream_ << _size_.width << " " << _size_.height;
    return _ostream_;
}

Coordinate::Coordinate(const int& x, const int& y){
    this->x = x;
    this->y = y;
}

Coordinate Coordinate::operator = (const Coordinate& other){
    this->x = other.x;
    this->y = other.y;
    return Coordinate(this->x, this->y);
}

bool Coordinate::operator == (const Coordinate& other){
    return this->x == other.x && this->y == other.y;
}

bool Coordinate::operator < (const Coordinate& other){
    return this->x < other.x && this->y < other.y;
}

bool Coordinate::operator > (const Coordinate& other){
    return this->x > other.x && this->y > other.y;
}

bool Coordinate::operator <= (const Coordinate& other){
    return this->x <= other.x && this->y <= other.y;
}

bool Coordinate::operator >= (const Coordinate& other){
    return this->x >= other.x && this->y >= other.y;
}

Coordinate Coordinate::operator += (const Coordinate& other){
    this->x += other.x;
    this->y += other.y;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator -= (const Coordinate& other){
    this->x -= other.x;
    this->y -= other.y;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator *= (const Coordinate& other){
    this->x *= other.x;
    this->y *= other.y;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator /= (const Coordinate& other){
    this->x /= other.x;
    this->y /= other.y;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator + (const Coordinate& other){
    return Coordinate(this->x + other.x, this->y + other.y);
}

Coordinate Coordinate::operator - (const Coordinate& other){
    return Coordinate(this->x - other.x, this->y - other.y);
}

Coordinate Coordinate::operator * (const Coordinate& other){
    return Coordinate(this->x * other.x, this->y * other.y);
}

Coordinate Coordinate::operator / (const Coordinate& other){
    return Coordinate(this->x / other.x, this->y / other.y);
}

Coordinate Coordinate::operator += (const int& other){
    this->x += other;
    this->y += other;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator -= (const int& other){
    this->x -= other;
    this->y -= other;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator *= (const int& other){
    this->x *= other;
    this->y *= other;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator /= (const int& other){
    this->x /= other;
    this->y /= other;
    return Coordinate(this->x, this->y);
}

Coordinate Coordinate::operator + (const int& other){
    return Coordinate(this->x + other, this->y + other);
}

Coordinate Coordinate::operator - (const int& other){
    return Coordinate(this->x - other, this->y - other);
}

Coordinate Coordinate::operator * (const int& other){
    return Coordinate(this->x * other, this->y * other);
}

Coordinate Coordinate::operator / (const int& other){
    return Coordinate(this->x / other, this->y / other);
}

float Coordinate::distance(const Coordinate& other){
    return sqrt(pow(other.x - this->x, 2) + pow(other.y - this->y, 2));
}

std::ostream& operator << (std::ostream& _ostream_, const Coordinate& _coordinate_){
    _ostream_ << _coordinate_.x << " " << _coordinate_.y;
    return _ostream_;
}

RECTANGLE::RECTANGLE(const int& x, const int& y, const int& width, const int& height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

RECTANGLE::RECTANGLE(const Coordinate& coordinate, const Size& size){
    this->x = coordinate.x;
    this->y = coordinate.y;
    this->width = size.width;
    this->height = size.height;
}

RECTANGLE RECTANGLE::operator = (const RECTANGLE& other){
    this->x = other.x;
    this->y = other.y;
    this->width = other.width;
    this->height = other.height;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

bool RECTANGLE::operator == (const RECTANGLE& other){
    return this->x == other.x && this->y == other.y && this->width == other.width && this->height == other.height;
}

bool RECTANGLE::operator < (const RECTANGLE& other){
    return this->x < other.x && this->y < other.y && this->width < other.width && this->height < other.height;
}

bool RECTANGLE::operator > (const RECTANGLE& other){
    return this->x > other.x && this->y > other.y && this->width > other.width && this->height > other.height;
}

bool RECTANGLE::operator <= (const RECTANGLE& other){
    return this->x <= other.x && this->y <= other.y && this->width <= other.width && this->height <= other.height;
}

bool RECTANGLE::operator >= (const RECTANGLE& other){
    return this->x >= other.x && this->y >= other.y && this->width >= other.width && this->height >= other.height;
}

RECTANGLE RECTANGLE::operator += (const RECTANGLE& other){
    this->x += other.x;
    this->y += other.y;
    this->width += other.width;
    this->height += other.height;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator -= (const RECTANGLE& other){
    this->x -= other.x;
    this->y -= other.y;
    this->width -= other.width;
    this->height -= other.height;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator *= (const RECTANGLE& other){
    this->x *= other.x;
    this->y *= other.y;
    this->width *= other.width;
    this->height *= other.height;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator /= (const RECTANGLE& other){
    this->x /= other.x;
    this->y /= other.y;
    this->width /= other.width;
    this->height /= other.height;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator + (const RECTANGLE& other){
    return RECTANGLE(this->x + other.x, this->y + other.y, this->width + other.width, this->height + other.height);
}

RECTANGLE RECTANGLE::operator - (const RECTANGLE& other){
    return RECTANGLE(this->x - other.x, this->y - other.y, this->width - other.width, this->height - other.height);
}

RECTANGLE RECTANGLE::operator * (const RECTANGLE& other){
    return RECTANGLE(this->x * other.x, this->y * other.y, this->width * other.width, this->height * other.height);
}

RECTANGLE RECTANGLE::operator / (const RECTANGLE& other){
    return RECTANGLE(this->x / other.x, this->y / other.y, this->width / other.width, this->height / other.height);
}

RECTANGLE RECTANGLE::operator += (const int& other){
    this->x += other;
    this->y += other;
    this->width += other;
    this->height += other;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator -= (const int& other){
    this->x -= other;
    this->y -= other;
    this->width -= other;
    this->height -= other;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator *= (const int& other){
    this->x *= other;
    this->y *= other;
    this->width *= other;
    this->height *= other;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator /= (const int& other){
    this->x /= other;
    this->y /= other;
    this->width /= other;
    this->height /= other;
    return RECTANGLE(this->x, this->y, this->width, this->height);
}

RECTANGLE RECTANGLE::operator + (const int& other){
    return RECTANGLE(this->x + other, this->y + other, this->width + other, this->height + other);
}

RECTANGLE RECTANGLE::operator - (const int& other){
    return RECTANGLE(this->x - other, this->y - other, this->width - other, this->height - other);
}

RECTANGLE RECTANGLE::operator * (const int& other){
    return RECTANGLE(this->x * other, this->y * other, this->width * other, this->height * other);
}

RECTANGLE RECTANGLE::operator / (const int& other){
    return RECTANGLE(this->x / other, this->y / other, this->width / other, this->height / other);
}

std::ostream& operator << (std::ostream& _ostream_, const RECTANGLE& _RECTANGLE_){
    _ostream_ << _RECTANGLE_.x << " " << _RECTANGLE_.y << " " << _RECTANGLE_.width << " " << _RECTANGLE_.height;
    return _ostream_;
}