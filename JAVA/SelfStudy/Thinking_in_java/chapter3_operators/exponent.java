//: operators/Exponents.java
// "e" means "10 to the power."
class Exponents {
public static void main(String[] args) { // Uppercase and lowercase āeā are the same:
float expFloat = 1.39e-43f;
expFloat = 1.39E-1f;
System.out.println(expFloat);
double expDouble = 47e47d; // ādā is optional
double expDouble2 = 47e47; // Automatically double
System.out.println(expDouble);
}
}
