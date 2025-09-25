---
# 🧪 Experiment 7 :- Arrays and Strings
---
📘 README: Programming Experiments – Strings and Arrays

---

🔍 Q1. Check if a String is Palindrome or Not
✅ Aim

To check whether a given string is a palindrome (reads the same forwards and backwards).

📚 Theory

A palindrome is a word, phrase, number, or sequence that reads the same backward as forward (e.g., "madam", "121").

🧠 Logic

Take the input string.

Reverse it.

Compare the original and reversed strings.

🔤 Syntax (Python)
string[::-1]  # Reverses the string

💻 Code
string = input("Enter a string: ")
if string == string[::-1]:
    print("Palindrome")
else:
    print("Not a palindrome")

📌 Conclusion

Successfully checked whether a given string is a palindrome using string reversal.

---

🔗 Q2. Concatenation of String
✅ Aim

To concatenate (join) two strings.

📚 Theory

String concatenation combines two or more strings into one.

🧠 Logic

Take two strings as input.

Use the + operator to concatenate them.

🔤 Syntax
str1 + str2  # Concatenates two strings

💻 Code
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
result = str1 + str2
print("Concatenated String:", result)

📌 Conclusion

Successfully concatenated two input strings.

---

📈 Q3. Find Maximum and Minimum Element in an Array
✅ Aim

To find the maximum and minimum elements in an array.

📚 Theory

The max() and min() functions return the highest and lowest values in an iterable.

🧠 Logic

Take array input.

Use max() and min() to find results.

🔤 Syntax
max(array), min(array)

💻 Code
arr = list(map(int, input("Enter array elements separated by space: ").split()))
print("Maximum:", max(arr))
print("Minimum:", min(arr))

📌 Conclusion

Successfully found the maximum and minimum elements in an array.

---

➕ Q4. Finding Sum and Average of Array
✅ Aim

To find the sum and average of elements in an array.

📚 Theory

Sum is the total of elements; average is sum divided by number of elements.

🧠 Logic

Take array input.

Use sum() and len() functions.

🔤 Syntax
sum(array) / len(array)

💻 Code
arr = list(map(int, input("Enter array elements separated by space: ").split()))
total = sum(arr)
average = total / len(arr)
print("Sum:", total)
print("Average:", average)

📌 Conclusion

Calculated the sum and average of elements in the array.

---

🔁 Q5. Reversing an Array
✅ Aim

To reverse the elements of an array.

📚 Theory

Reversing an array means changing the order of elements from last to first.

🧠 Logic

Use slicing or reverse loop.

🔤 Syntax
array[::-1]

💻 Code
arr = list(map(int, input("Enter array elements separated by space: ").split()))
reversed_arr = arr[::-1]
print("Reversed Array:", reversed_arr)

📌 Conclusion

Successfully reversed the array elements.

---

🔍 Q6. Searching an Element in an Array
✅ Aim

To search for a particular element in an array.

📚 Theory

Searching helps to check if a value exists in a data structure and find its index.

🧠 Logic

Use in to check presence.

Use .index() to find position (optional).

🔤 Syntax
value in array

💻 Code
arr = list(map(int, input("Enter array elements: ").split()))
key = int(input("Enter element to search: "))
if key in arr:
    print("Element found at index", arr.index(key))
else:
    print("Element not found")

📌 Conclusion

Successfully implemented linear search in an array.

---

✍️ Q7. Take String as Input
✅ Aim

To take a string input from the user.

📚 Theory

Input function is used to receive data from the user.

🔤 Syntax
input("Enter a string: ")

💻 Code
user_input = input("Enter a string: ")
print("You entered:", user_input)

📌 Conclusion

Successfully took a string input from the user.

---

⌨️ Q8. Take Input from User and Store in Array
✅ Aim

To take multiple inputs from the user and store them in an array.

📚 Theory

Use input() to read data, then split() and map() to convert and store.

🔤 Syntax
list(map(int, input().split()))

💻 Code

arr = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", arr)

📌 Conclusion

Successfully took multiple inputs and stored them in an array.
