class LogicalDemo {
        public static void main(String[] args) {
            int num1 = 20;
            int num2 = 10;

            //logical operators alwaysworks on only boolean values
            boolean ans = (num1>num2) && (num2!=num1);
            //and opertor which returns true when both conditions are true otherwise return false

            System.out.println("&& : "+ ans);


            //logical or ||
            ans = (num1 < num2) || (num2!=num1);
            System.out.println("|| : "+ ans);

            //logical xor ^
            ans = (num1 < num2) ^ (num2==num1);
            System.out.println("^ : "+ ans);        //false


            //Not operator
            boolean val = true;
            System.out.println("!val = "+ (!val));


          }
        }

/*error:bad operand types for binary operator and &&*/
