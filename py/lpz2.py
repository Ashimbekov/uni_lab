import math

# 1 - a
a = 5
b = 3
c = 4

res = (pow(a, 2) + math.sqrt(pow(a, 2) - 2 * b * c + pow(c, 3)))/(abs(b-c))
print(res)

# 1 - б
x = 5
res = math.atan(math.sqrt((x+1)/2))
print(res)

# 1 - в
alpha = 2
beta = 5

res = 2 * math.sin((alpha+beta)/2)*math.cos((alpha-beta)/2)
print(res)

# 1 - г
x = 3

res = abs(pow(x, 2) + (3/(x + 7)) + math.log(x))
print(res)