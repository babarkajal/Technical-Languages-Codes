void main(){
        int i = -5;
        int num = i % -4;
        printf("%d\n", num);
}
/*
    A. Compile time error
    B. -1
    C. 1
    D. None

*/
/*
Ans = B. -1
If the divident is negative then the reminder is also a negative num
e.g  1.-10 % 6 = -4
      2 . -5 % -4 = -1
      3 
     % a operator always have negtive value if divident is negative or if both are negtive.
*/
