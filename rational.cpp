/*
 * Вам дан класс Rational, который описывает рациональное число.
 * В нем определены методы add, sub, mul и div, которые прибавляют к нему число,
 * отнимают число, умножают на число и делят на число соответственно.
 * Кроме того в нем определен метод neg, который меняет знак на противоположный.
 *
 * Вам нужно определить операторы +=, -=, *=, /= для класса Rational так,
 * чтобы они могли принимать в качестве аргументов и объекты типа Rational и целые числа.
 * Кроме того вам необходимо определить операторы унарного минуса и плюса для класса Rational.
 */

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational const operator+() const { return *this; }
    Rational const operator-() const { return Rational(-numerator_, denominator_); }

    Rational operator+(const Rational &rational) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.add(rational);
        return r;
    }
    Rational operator+(int d) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.add(Rational(d));
        return r;
    }
    friend Rational operator+(int d, const Rational &rational)
    {
        return rational + d;
    }

    Rational operator-(const Rational &rational) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.sub(rational);
        return r;
    }
    Rational operator-(double d) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.sub(Rational(d));
        return r;
    }
    friend Rational operator-(int d, const Rational &rational)
    {
        return -(rational - d);
    }

    Rational operator*(const Rational &rational) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.mul(rational);
        return r;
    }
    Rational operator*(int d) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.mul(Rational(d));
        return r;
    }
    friend Rational operator*(int d, const Rational &rational)
    {
        return rational * d;
    }

    Rational operator/(const Rational &rational) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.div(rational);
        return r;
    }
    Rational operator/(int d) const
    {
        Rational r(this->numerator_, this->denominator_);
        r.div(Rational(d));
        return r;
    }
    friend Rational operator/(int d, const Rational &rational)
    {
        return Rational(d) / rational;
    }

    Rational & operator+=(const Rational & rational) {
        this->add(rational);
        return *this;
    }
    Rational & operator+=(int d) {
        this->add(Rational(d));
        return *this;
    }
    
    Rational & operator-=(const Rational & rational) {
        this->sub(rational);
        return *this;
    }
    Rational & operator-=(int d) {
        this->sub(Rational(d));
        return *this;
    }

    Rational & operator*=(const Rational & rational) {
        this->mul(rational);
        return *this;
    }
    Rational & operator*=(int d) {
        this->mul(Rational(d));
        return *this;
    }

    Rational & operator/=(const Rational & rational) {
        this->div(rational);
        return *this;
    }
    Rational & operator/=(int d) {
        this->div(Rational(d));
        return *this;
    }

private:
    int numerator_;
    int denominator_;
};