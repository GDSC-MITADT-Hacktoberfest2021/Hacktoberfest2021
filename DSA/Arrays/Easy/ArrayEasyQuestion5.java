package Arrays.Easy;

import java.util.Scanner;

class ExceptionalElementFinder {
    private static int exceptionalElement(int[] array, int sizeOfArray) {
        int exceptionalNumber = array[0];
        for (int index = 1; index < sizeOfArray; index++) {
            exceptionalNumber = (exceptionalNumber | array[index]) - (exceptionalNumber & array[index]);
        }
        return exceptionalNumber;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int sizeOfArray = scanner.nextInt();
        if (sizeOfArray % 2 == 0) {
            System.out.print("The array with the given size may not have an exceptional element!!!");
        } else {
            System.out.print("Enter the array elements separated by space : ");
            int[] array = new int[sizeOfArray];
            for (int index = 0; index < sizeOfArray; index++) {
                array[index] = scanner.nextInt();
            }
            System.out.println("The exceptional number in the array is : " + exceptionalElement(array, sizeOfArray));
        }
        scanner.close();
    }
}
