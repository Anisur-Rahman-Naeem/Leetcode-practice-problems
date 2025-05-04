import java.util.Scanner;

public class valid_palindrome_II {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        boolean result = validPalindrome(input);
        System.out.println(result);
    }

    static boolean validPalindrome(String s){
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s.charAt(left) == s.charAt(right)) {
                left++;
                right--;
            } else {
                return isPalindrome(s, left+1, right) || isPalindrome(s, left, right-1);
            }
        }
        return true;
    }

    private static boolean isPalindrome(String s, int left, int right){
        while (left < right) {
        if (s.charAt(left) == s.charAt(right)) {
                left++;
                right--;
            } else return false;
        }
        return true;
    }
}
