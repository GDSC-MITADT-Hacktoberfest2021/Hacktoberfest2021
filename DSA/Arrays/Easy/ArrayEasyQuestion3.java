package Arrays.Easy;

import java.util.Scanner;

class OccurrencesCounter {
    private static int countOccurrences(int numberToCount, int[] array, int sizeOfArray) {
        int occurrencesOfGivenNumber = 0;
        for (int index = 0; ((index < sizeOfArray) && (array[index] <= numberToCount)); index++) {
            if (array[index] == numberToCount) {
                occurrencesOfGivenNumber++;
            }
        }
        return occurrencesOfGivenNumber;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int sizeOfArray = scanner.nextInt();
        System.out.print("Enter the number to find occurrence : ");
        int numberToCount = scanner.nextInt();
        int[] array = new int[sizeOfArray];
        System.out.print("Enter the sorted array elements separated by space : ");
        for (int index = 0; index < sizeOfArray; index++) {
            array[index] = scanner.nextInt();
        }
        System.out.println(numberToCount + " occurred " + countOccurrences(numberToCount, array, sizeOfArray) + " times");
        scanner.close();
    }
}
