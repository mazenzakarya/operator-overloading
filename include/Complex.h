#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
  double real;
  double img;

 public:
  Complex(double real = 0, double img = 0) {
    this->real = real;
    this->img = img;
  }
  Complex operator+(const Complex& other) const;
  Complex operator-(const Complex& other) const;
  Complex operator*(const Complex& other) const;
  Complex operator/(const Complex& other) const;
  friend ostream& operator<<(ostream& out, const Complex& c);
  Complex operator++();
  Complex operator++(int);
  Complex operator--();
  Complex operator--(int);
  bool operator==(const Complex& other) const;
  bool operator!=(const Complex& other) const;
  Complex operator+=(const Complex& other);
  Complex& operator-=(const Complex& other);
  friend istream& operator>>(istream& in, Complex& c);
  friend Complex operator+(int lhs, const Complex& rhs);
  void getComplex() const;
};
#endif  // COMPLEX_H