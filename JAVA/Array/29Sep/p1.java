class IPL {
        public static void main(String[] args) {
                IPL match = new IPL();
                match.score();
                System.out.println("Class of object: "+ match.getClass());
                System.out.println("address "+match.hashCode());
        }

        void score() {
                System.out.println("Score 100");
        }
}
