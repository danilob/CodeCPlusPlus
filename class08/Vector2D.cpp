#include "Vector2D.hpp"

Vector2D::Vector2D() : x(0), y(0) {
    // Construtor padrão
}

Vector2D::Vector2D(double x, double y) : x(x), y(y) {
    // Construtor com parâmetros
}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(this->x + other.x, this->y + other.y);
}

// bool Vector2D::operator==(const Vector2D& other) const {
//     return (this->x == other.x) && (this->y == other.y);
// }

Vector2D Vector2D::operator*(double scalar) const {
    return Vector2D(this->x * scalar, this->y * scalar);
}

Vector2D operator*(double scalar, const Vector2D& v) {
    return Vector2D(v.x * scalar, v.y * scalar);
}

bool operator==(const Vector2D& a, const Vector2D& b) {
    return (a.x == b.x) && (a.y == b.y);
}

ostream& operator<<(ostream& os, const Vector2D& v) {
    os << "Vector2D(" << v.x << ", " << v.y << ")";
    return os;
}

void Vector2D::print() const {
    std::cout << "Vector2D(" << x << ", " << y << ")" << std::endl;
}


