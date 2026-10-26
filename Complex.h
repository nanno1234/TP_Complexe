class Complex
{
private:
    double re;
    double img;

public:
    Complex(double, double);
    Complex(const Complex& c);

    Complex operator+(Complex c) const;
    Complex operator+(double a) const;

    Complex operator-(Complex c) const;
    Complex operator-(double a) const;

    Complex operator*(Complex c) const;
    Complex operator*(double a) const;

    Complex operator/(Complex c) const;
    Complex operator/(double a) const;

    bool operator==(Complex c) const;
    bool operator==(double a) const;

    bool operator<(Complex c) const;
    bool operator<(double a) const;

    bool operator>(Complex c) const;
    bool operator>(double a) const;

    bool operator!=(Complex c) const;
    bool operator!=(double a) const;

    void afficher() const;
    ~Complex();
};