class Solution:
    def average(self, salary: List[int]) -> float:
        mini = min(salary)
        maxi = max(salary)

        sum_of_salary = sum(salary) - mini - maxi

        return sum_of_salary / (len(salary) - 2)