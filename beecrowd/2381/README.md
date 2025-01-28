# [2381 - Call List](https://www.beecrowd.com.br/repository/UOJ_2381_en.html)

<p>
	<img alt="Easy Badge" src="https://img.shields.io/badge/Easy-%231a7f37?style=for-the-badge">
	<img alt="Sort Badge" src="https://img.shields.io/badge/Sort-%238250df?style=for-the-badge">
</p>

Joana is a respected teacher and has several students. In her last class, she promised that she would raffle off a student to earn a special bonus on the final grade: she put `N` pieces of paper numbered from 1 to `N` in a bag and drew a certain number `K`; the winning student was the Kth student on the roll call.
The problem is that Joana forgot her class diary, so she has no way of knowing which number corresponds to which student. She knows the names of all the students, and that their numbers, from 1 to `N`, are assigned in alphabetical order, but her students are very anxious and want to know right away who was the winner.
Given the names of Joana's students and the number drawn, determine the name of the student who should receive the bonus.

> ### Input
> The first line contains two integers $N$ and $K$ separated by a blank space $(1 ≤ K ≤ N ≤ 100)$. Each of the following `N` lines contains a string of minimum length 1 and maximum length 20 representing the names of the students. Names are made up of all lowercase letters from `a` to `z`.

> ### Output
> Your program must print a single line, containing the name of the student who is to receive the bonus.

## 💡 Solution Explanation
To solve this problem, we must sort the list of students in alphabetical order and print the name of the student at the `K`-th position.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>
