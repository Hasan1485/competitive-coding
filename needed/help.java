import java.util.*;
class help {
    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter largest and smallest numbers");
        int a = sc.nextInt(), b = sc.nextInt();
        System.out.println("Enter first and last character");
        char c = sc.next().charAt(0), h = sc.next().charAt(0);
        pattern(a, b);
        pattern(c, h); 
    }
    static void pattern(int a, int b) {
        int copy = a;
        for (int i = (a + 1) / 2; i > 0; --i) {
            a = copy;
            for (int j = 0; j < i; ++j) {
                System.out.print(a + " ");
                a = a - 2;
            }
            System.out.println();
            copy = copy - 2;
        }
    }
    static void pattern(char a, char b) {
        char cur = 'a';
        for (int i = 0; i <= b - 96; ++i) {
            for (int j = 0; j < i; ++j) {
                System.out.print((j % 2 == 0 ? (char)(cur) : (char)(cur - 32)) + " ");
                cur++;
            }
            cur = 'a';
            System.out.println();
        }
    }
}