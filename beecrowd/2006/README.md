# [2006 - Identifying Tea](https://www.beecrowd.com.br/repository/UOJ_2006_en.html)

<p>
	<img alt="Easy Badge" src="https://img.shields.io/badge/Easy-%231a7f37?style=for-the-badge">
	<img alt="Conditional Statements Badge" src="https://img.shields.io/badge/Conditional%20Statements-%238250df?style=for-the-badge">
</p>

Blind tea tasting is the skill of identifying a tea by using only your senses of smell and taste.
As part of the Ideal Challenge of Pure-Tea Consumers (ICPC), a local TV show is organized. During the show, a full teapot is prepared and five contestants are handed a cup of tea each. The participants must smell, taste and assess the sample so as to identify the tea type, which can be: **(1)** white tea; **(2)** green tea; **(3)** black tea; or **(4)** herbal tea. At the end, the answers are checked to determine the number of correct guesses.
Given the actual tea type and the answers provided, determine the number of contestants who got the correct answer.

> ### Input
> The first line contains an integer `T` representing the tea type $(1 ≤ T ≤ 4)$. The second line contains five integers `A`, `B`, `C`, `D` and `E`, indicating the answer given by each contestant $(1 ≤ A, B, C, D, E ≤ 4)$.

> ### Output
> Output a line with an integer representing the number of contestants who got the correct answer.

## 💡 Solution Explanation
This problem is straightforward and involves basic comparison using `if` statement.

To solve this problem, we need to read the tea type and the answers given by the contestants. We then need to compare the tea type with each contestant's answer and count the number of correct guesses.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>