

class Fraction
{
private:
    int Numberator;
    int Denominator;
public:
    void create(int, int);
    void Input();
    void Output();
    Fraction Add(Fraction);
    Fraction Substract(Fraction);
    Fraction Multiply(Fraction);
    Fraction Divide(Fraction);
    Fraction Reduce();
    int Compare(Fraction);
    bool IsPositive();
    bool IsNegative();
    bool IsZero();
};