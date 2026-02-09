num = int(input("Enter a number: "))

# Check divisibility by 2
div2 = (num % 2 == 0)

# Check divisibility by 3
temp = num
digit_sum = 0
while temp > 0:
    digit_sum += temp % 10
    temp //= 10

div3 = (digit_sum % 3 == 0)

if div2 and div3:
    print(num, "is divisible by 6")
else:
    print(num, "is not divisible by 6")
