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
    
    Rational const operator + () const { return *this; }
    Rational const operator - () const { return Rational(-numerator_, denominator_); }

    Rational & operator += (Rational const& right ) { this->add(right); return *this; }
    Rational & operator -= (Rational const& right ) { this->sub(right); return *this; }
    Rational & operator *= (Rational const& right ) { this->mul(right); return *this; }
    Rational & operator /= (Rational const& right ) { this->div(right); return *this; }

private:
    int numerator_;
    int denominator_;
};