#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex(double re, double im)
    : re(re), img(im)
{
}

Complex::Complex(const Complex& c)
{
    this->re = c.re;
    this->img = c.img;
}


Complex Complex::operator+(Complex c) const
{
    Complex res(0, 0);
    res.re = this->re + c.re;
    res.img = this->img + c.img;
    return res;
}

Complex Complex::operator+(double a) const
{
    Complex res(0, 0);
    res.re = this->re + a;
    res.img = this->img;
    return res;
}


Complex Complex::operator-(Complex c) const
{
    Complex res(0, 0);
    res.re = this->re - c.re;
    res.img = this->img - c.img;
    return res;
}

Complex Complex::operator-(double a) const
{
    Complex res(0, 0);
    res.re = this->re - a;
    res.img = this->img;
    return res;
}


Complex Complex::operator*(Complex c) const
{
    Complex res(0, 0);
    res.re = this->re * c.re - this->img * c.img;
    res.img = this->re * c.img + this->img * c.re;
    return res;
}

Complex Complex::operator*(double a) const
{
    Complex res(0, 0);
    res.re = this->re * a;
    res.img = this->img * a;
    return res;
}


Complex Complex::operator/(Complex c) const
{
    Complex res(0, 0);
    double d;

    d = c.re * c.re + c.img * c.img;

    if (d == 0)
    {
        cout << "Division impossible" << endl;
        return res;
    }

    res.re = (this->re * c.re + this->img * c.img) / d;
    res.img = (this->img * c.re - this->re * c.img) / d;

    return res;
}

Complex Complex::operator/(double a) const
{
    Complex res(0, 0);

    if (a == 0)
    {
        cout << "Division impossible" << endl;
        return res;
    }

    res.re = this->re / a;
    res.img = this->img / a;

    return res;
}


bool Complex::operator==(Complex c) const
{
    return (this->re == c.re && this->img == c.img);
}

bool Complex::operator==(double a) const
{
    return (this->re == a && this->img == 0);
}

// Inferieur
bool Complex::operator<(Complex c) const
{
    bool res;
    double module1, module2;

    module1 = sqrt(this->re * this->re + this->img * this->img);
    module2 = sqrt(c.re * c.re + c.img * c.img);

    if (module1 < module2)
        res = true;
    else
        res = false;

    return res;
}

bool Complex::operator<(double a) const
{
    bool res;
    double module1;

    module1 = sqrt(this->re * this->re + this->img * this->img);

    if (module1 < abs(a))
        res = true;
    else
        res = false;

    return res;
}


bool Complex::operator>(Complex c) const
{
    bool res;
    double module1, module2;

    module1 = sqrt(this->re * this->re + this->img * this->img);
    module2 = sqrt(c.re * c.re + c.img * c.img);

    if (module1 > module2)
        res = true;
    else
        res = false;

    return res;
}

bool Complex::operator>(double a) const
{
    bool res;
    double module1;

    module1 = sqrt(this->re * this->re + this->img * this->img);

    if (module1 > abs(a))
        res = true;
    else
        res = false;

    return res;
}


bool Complex::operator!=(Complex c) const
{
    return !(*this == c);
}

bool Complex::operator!=(double a) const
{
    return !(*this == a);
}


void Complex::afficher() const
{
    cout << this->re;

    if (this->img >= 0)
        cout << " + i" << this->img << endl;
    else
        cout << " - i" << -this->img << endl;
}

Complex::~Complex()
{
}