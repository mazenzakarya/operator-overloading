#include "Complex.h"

Complex Complex::operator+(const Complex& other) const {
  return Complex(real + other.real, img + other.img);
};

Complex Complex::operator-(const Complex& other) const {
  return Complex(real - other.real, img - other.img);
};

Complex Complex::operator*(const Complex& other) const {
  return Complex(real * other.real, img * other.img);
};

Complex Complex::operator/(const Complex& other) const {
  return Complex(real / other.real, img / other.img);
};

ostream& operator<<(ostream& out, const Complex& c) {
  if (c.real != 0) {
    out << c.real;
  }
  if (c.img != 0) {
    if (c.img > 0) {
      out << "+" << c.img << "j";
    } else {
      out << c.img << "j";
    }
  }
  return out;
};

// prefix
Complex Complex::operator++() {
  this->real++;
  this->img++;
  return *this;
};

// postfix
Complex Complex::operator++(int) {
  Complex temp = *this;
  this->real++;
  this->img++;
  return temp;
};

Complex Complex::operator--() {
  this->real--;
  this->img--;
  return *this;
};

Complex Complex::operator--(int) {
  Complex temp = *this;
  this->real--;
  this->img--;
  return temp;
};

///////////////////////

bool Complex::operator==(const Complex& other) const {
  return this->real == other.real && this->img == other.img;
};

bool Complex::operator!=(const Complex& other) const {
  return this->real != other.real || this->img != other.img;
};

Complex Complex::operator+=(const Complex& other) {
  this->real += other.real;
  this->img += other.img;
  return *this;
};

Complex& Complex::operator-=(const Complex& other) {
  this->real -= other.real;
  this->img -= other.img;
  return *this;
};

Complex operator+(int lhs, const Complex& rhs) {
  return Complex(lhs + rhs.real, rhs.img);
};

istream& operator>>(istream& in, Complex& c) { in >> c.real >> c.img; };

void Complex::getComplex() const {
  if (real != 0) {
    cout << real;
  }
  if (img != 0) {
    if (img > 0) {
      cout << "+" << img << "j" << endl;
    } else {
      cout << img << "j" << endl;
    }
  }
};
