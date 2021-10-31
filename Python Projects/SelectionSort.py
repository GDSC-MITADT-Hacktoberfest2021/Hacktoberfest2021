print("Input some numbers :")

Arr= list(map(int, input().split()))
#sorting using selection sort

for i in range(len(Arr)):

    # Find the minimum element in remaining
    # unsorted array
    min_idx = i
    for j in range(i + 1, len(Arr)):
        if Arr[min_idx] > Arr[j]:
            min_idx = j

    # Swap the found minimum element with
    # the first element
    Arr[i], Arr[min_idx] = Arr[min_idx], Arr[i]

# Print the sorted array

print("The Sorted array is ")

for i in range(len(Arr)):
    print("%d" % Arr[i])

