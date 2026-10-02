#ifndef MATH_H
#define MATH_H

class Math {
public:
    // Basic arithmetic operations
    static double add(double a, double b);
    static double subtract(double a, double b);
    static double multiply(double a, double b);
    static double divide(double a, double b);
    static int modulo(int a, int b);
    
    // Power and root operations
    static double power(double base, double exponent);
    static double squareRoot(double value);
    static double cubeRoot(double value);
    
    // Trigonometric operations
    static double sine(double angle);
    static double cosine(double angle);
    static double tangent(double angle);
    
    // Utility operations
    static double absolute(double value);
    static int factorial(int n);
    static double average(double* values, int count);
    static double maximum(double* values, int count);
    static double minimum(double* values, int count);
    
private:
    static const double PI;
    static const double EPSILON;
};

#endif // MATH_H
