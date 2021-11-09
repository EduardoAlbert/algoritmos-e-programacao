# var
n = 0
nums = []

# algoritmo
n = int(input("Quantos números solicitar? "))

for i in range(0, n):
    nums.append(int(input(f"Digite o {i+1}º número: ")))

print("O maior número digitado foi", max(nums))