package Arrays.Easy;

import java.util.*;

class ZeroReplacer {
    private static int replaceZeroByFive(int actualNumber) {
        int updatedNumber = 0;
        for (int index = 0; actualNumber != 0; index++) {
            if (actualNumber % Math.pow(10, 1) != 0) {
                updatedNumber += (actualNumber % Math.pow(10, 1)) * Math.pow(10, index);
            } else {
                updatedNumber += 5 * Math.pow(10, index);
            }
            actualNumber /= 10;
        }
        return updatedNumber;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int userInput = scanner.nextInt();
        System.out.println("After replacing zeros with five, the new number is : " + replaceZeroByFive(userInput));
        scanner.close();
    }
}