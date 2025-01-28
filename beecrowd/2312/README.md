# [2312 - Medal Table](https://www.beecrowd.com.br/repository/UOJ_2312_en.html)

<p>
	<img alt="Easy Badge" src="https://img.shields.io/badge/Easy-%231a7f37?style=for-the-badge">
	<img alt="Sort Badge" src="https://img.shields.io/badge/Sort-%238250df?style=for-the-badge">
</p>

Somebody messed up the olympic medal table. Your program must put it back in the right order. The order of the countries in the medal table is given by the number of gold medals. If there's a tie in the number of gold medals, than the country with more silver medals win. If there's a tie in both gold and silver medals, the country with more bronze medals should be above. If two or more nations tie in the three kinds of medals, your program must show them in alphabetic order.

> ### Input
> Input is the number of participating nations $N$ $(0 ≤ N ≤ 500)$, followed by the list of countries and their gold $G$ $(0 ≤ G ≤ 10000)$, silver $S$ $(0 ≤ S ≤ 10000)$ and bronze $B$ $(0 ≤ B ≤ 10000)$ medals.

> ### Output
> Output should be the list of countries and their gold, silver and bronze medals shown in the specified order.

## 💡 Solution Explanation
To solve this problem, the list of countries must be sorted in descending order of gold medals, silver medals and bronze medals. If there is a tie in the number of medals, the tied countries must be sorted in ascending order of their names.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>
