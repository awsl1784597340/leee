class Solution:
    def fib(self, n: int) -> int:
        a , b = 0 , 1
        for _ in range(n):
            a , b= a+b , a
        return a % 1000000007