

class Fraction
{   
    private:
        int numerator;
        int denominator;
    public:
        void input();
        void output();
        Fraction add(Fraction f1, Fraction f2);
        Fraction sub(Fraction f1, Fraction f2);
        Fraction mul(Fraction f1, Fraction f2);
        Fraction div(Fraction f1, Fraction f2);
        Fraction Reduce(Fraction f1);
        string Compare(Fraction f1, Fraction f2);
        bool IsPositive(Fraction f1);
        bool IsNegative(Fraction f1);
        bool isZero(Fraction f1); 
        
};