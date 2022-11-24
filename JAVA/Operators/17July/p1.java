class RelationalDemo {
        public static void main(String[] args) {
            int num1 = 20;
            int num2 =10;
            boolean ans = num1 == num2;
            //int ans = num1 ==num2;                //error: incomaptible types boolean cannot be converted to int

            System.out.println("num1 == num2: "+ans);              //false

            //greater than
            ans = num1 > num2;
            System.out.println("num1 > num2: "+ans);    //true

            //less than
            ans = num1 < num2;
            System.out.println("num1 < num2: "+ans);        //false

            //less than or equals to
            ans = num1 <= num2;
            System.out.println("num1 <= num2: "+ans);        //false

            //greater  than or equals to
            ans = num1 >= num2;
            System.out.println("num1 >= num2: "+ans);        //true

            System.out.println("num1 != num2 "+(num1 != num2));     //true

        }
}
