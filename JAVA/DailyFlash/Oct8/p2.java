//declare array using three different ways

import java.util.*;
class Program {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                //array with intilizer list
                int[][] larr = {{1}, {2,3},{4,5,6}};
                /* here we are giving 1D arrays separated by comma
                   larr[0] will hold {1}
                   larr[1] will hold {2,3}
                   larr[2] will hold {4,5,6}
                */
                System.out.println("Array with initlizer list");
                for(int olc = 0; olc < larr.length; olc++) {
                        for(int ilc=0; ilc < larr[olc].length; ilc++) {
                                System.out.print(larr[olc][ilc] + "  ");
                        }
                        System.out.println();
                }
                //declare array using new and initlizer list
                int[][] marr = new int[3][];
                marr[0] = new int[]{100};
                marr[1] = new int[]{10,20};
                marr[2] = new int[]{1,2,3};
                //this is internal of first way

                System.out.println("Array using new and initlizer list");
                for(int olc = 0; olc < marr.length; olc++) {
                        for(int ilc=0; ilc < marr[olc].length; ilc++) {
                                System.out.print(marr[olc][ilc] + "  ");
                        }
                        System.out.println();
                }

                //declare array using new
                int[][] narr = new int[3][];            //ethe row ch dimention den compulsary asat
                //karan compiler la samjyla hav ki actually kiticha array asnanre jar blank dil tr runtime exception yenache chances astat

                //now array is created which contain three blocks in which it is going to store the addresses od 1D array. This acts as Array of pointers
                narr[0] = new int[1];
                narr[1] = new int[2];
                narr[2] = new int[3];


                /*
                        narr
                        | 100 | 200 | 300 |
                          /     |       \
                         /      |        \
                     |10|   | 20 | 30 |   | 40 | 50 | 60
                   100     200           300
                */
                System.out.println("Enter elements: ");
                for(int olc =0; olc<narr.length; olc++) {

                        for(int ilc=0; ilc < narr[olc].length; ilc++) {
                                narr[olc][ilc] = sc.nextInt();
                        }

                }

                System.out.println("Array using new");
                for(int olc = 0; olc < narr.length; olc++) {
                        for(int ilc=0; ilc < narr[olc].length; ilc++) {
                                System.out.print(narr[olc][ilc] + "  ");
                        }
                        System.out.println();
                }


        }
}
