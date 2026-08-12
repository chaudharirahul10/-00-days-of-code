numbers = [1,2,3,4,5,6,7,8,9,10]
for i in range(len(numbers)):
    if numbers[i] % 2==0:
        
     print("even numbers from the list :",numbers[i])
    
even_numbers = [number for number in numbers if number % 2 == 0]

print("Even numbers using list comprehension:", even_numbers)