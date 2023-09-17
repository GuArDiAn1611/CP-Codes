import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int len = s.length();
            if (len > 10) {
                char c = s.charAt(0);
                String str = new StringBuilder().append(c).append(len - 2).append(s.charAt(len - 1)).toString();
                System.out.println(str);
            } else {
                System.out.println(s);
            }
        }
    }
}
