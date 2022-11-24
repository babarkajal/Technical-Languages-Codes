/*Program 12: Ternary Operator working with other operators. Take 3 variables as
follows and perform the following 4 operations, print the value of ans, i, j, k after
each operation, also solve each operation on notebook and send it to your group
leader via email.
int i = 5; int j = 10; int k = 15; boolean ans;
a] ans = (i < (j - 10))? true: false;
b] ans = (i == (i = j))? true: false;
c] ans = ((i & j & k) != 0)? true: false;
d] ans = ((i ^ j >> 2) == 0)? true: false;
*/

class Program {
    public static void main(String[] args) {
        int i=5 , j=10;
        int k =15;
        boolean ans;
        ans =  (i < (j - 10))? true: false;
        //     (5 <  0) ==>false
        System.out.println("(i < (j - 10))? true: false ==>  " +ans);
        ans = (i == (i = j))? true: false;
        /*    5 == (i = 10)
              5 == 10 -->false;
        */
        System.out.println("(i == (i = j)) ==> " + ans);

        ans = ((i & j & k) != 0)? true: false;
        /*   i--> 1010
             j--> 1010
             ---------
             &--> 1010
             k--> 1111
             ---------
             &--> 1010 ==> 10

             (10!= 0) ==> true
        */
        System.out.println("(i & j & k) != 0 ==> "+ans);
        System.out.println(i+" "+ j);
        ans = ((i ^ j >> 2) == 0)? true: false;
        /*
            =  i--> 1010
               j--> 1010
               ---------
               ^    0000
               >>2  0000
               >>2  0000  ==> 0
              and 0!= 0 this is false
        */
        System.out.println("(i ^ j >> 2) == 0 ==> "+ ans);



    }
}
