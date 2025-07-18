#include <stdio.h> // #include -> Preprocessor Directive (ไม่ใช่ Token ของ C)

int main() // int -> Keyword, main -> Identifier, () -> Operator
{
printf("Hello,\n"); // printf -> Identifier, "Hello,\n" -> Constant, () -> Operator, ; -> Operator
printf("C Tokens!\n"); // printf -> Identifier, "C Tokens!\n" -> Constant, () -> Operator, ; -> Operator

printf("Hello,\n"); // printf -> Identifier, "Hello,\n" -> Constant
printf("C Tokens!\n"); // printf -> Identifier, "C Tokens!\n" -> Constant

return 0; // return -> Keyword, 0 -> Constant, ; -> Operator
}