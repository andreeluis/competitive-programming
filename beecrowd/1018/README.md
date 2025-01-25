# [1018 - Banknotes](https://www.beecrowd.com.br/repository/UOJ_1018_en.html)

<p>
	<img alt="Easy Badge" src="https://img.shields.io/badge/Easy-%231a7f37?style=for-the-badge">
	<img alt="Greedy Algorithm Badge" src="https://img.shields.io/badge/Greedy%20Algorithm-%238250df?style=for-the-badge">
</p>

In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are `100`, `50`, `20`, `10`, `5`, `2` and `1`. Print the read value and the list of banknotes.

> ### Input
> The input file contains an integer value $N$ $(0 < N < 1000000)$.

> ### Output
> Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

## 💡 Solution Explanation
This problem is a classic example of a greedy algorithm, where the locally optimal choice (using the largest banknote) leads to a globally optimal solution (minimum number of banknotes).

To solve this problem, we use a greedy algorithm approach. The idea is to always use the largest possible banknote first and then move to the next largest banknote until the entire amount is decomposed. This ensures that we use the minimum number of banknotes.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>