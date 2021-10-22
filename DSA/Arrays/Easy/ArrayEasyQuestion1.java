package Arrays.Easy;

import java.util.*;

class LargestElementFinder {
    private static int largestElement(int[] array, int sizeOfArray) {
        int maxElement = array[0];
        for (int index = 1; index < sizeOfArray; index++) {
            if (maxElement < array[index]) {
                maxElement = array[index];
            }
        }
        return maxElement;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int sizeOfArray = scanner.nextInt();
        int[] array = new int[sizeOfArray];
        System.out.print("Enter the array elements separated by space : ");
        for (int index = 0; index < sizeOfArray; index++) {
            array[index] = scanner.nextInt();
        }
        System.out.println("Largest element in the given array is : " + largestElement(array, sizeOfArray));
        scanner.close();
    }
}
