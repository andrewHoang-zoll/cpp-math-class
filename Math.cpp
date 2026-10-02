#include "Math.h"
#include <cmath>
#include <stdexcept>

const double Math::PI = 3.14159265358979323846;
const double Math::EPSILON = 1e-9;

double Math::add(double a, double b) {
    return a + b;
}

double Math::subtract(double a, double b) {
    return a - b;
}

double Math::multiply(double a, double b) {
    return a * b;
}

double Math::divide(double a, double b) {
    if (std::abs(b) < EPSILON) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

int Math::modulo(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Modulo by zero");
    }
    return a % b;
}

double Math::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double Math::squareRoot(double value) {
    if (value < 0) {
        throw std::invalid_argument("Square root of negative number");
    }
    return std::sqrt(value);
}

double Math::cubeRoot(double value) {
    return std::cbrt(value);
}

double Math::sine(double angle) {
    return std::sin(angle);
}

double Math::cosine(double angle) {
    return std::cos(angle);
}

double Math::tangent(double angle) {
    return std::tan(angle);
}

double Math::absolute(double value) {
    return std::abs(value);
}

int Math::factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial of negative number");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double Math::average(double* values, int count) {
    if (count <= 0) {
        throw std::invalid_argument("Count must be positive");
    }
    double sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += values[i];
    }
    return sum / count;
}

double Math::maximum(double* values, int count) {
    if (count <= 0) {
        throw std::invalid_argument("Count must be positive");
    }
    double max = values[0];
    for (int i = 1; i < count; ++i) {
        if (values[i] > max) {
            max = values[i];
        }
    }
    return max;
}

double Math::minimum(double* values, int count) {
    if (count <= 0) {
        throw std::invalid_argument("Count must be positive");
    }
    double min = values[0];
    for (int i = 1; i < count; ++i) {
        if (values[i] < min) {
            min = values[i];
        }
    }
    return min;
}
