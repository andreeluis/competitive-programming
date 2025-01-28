# [1523 - Linear Parking Lot](https://www.beecrowd.com.br/repository/UOJ_1523_en.html)

<p>
	<img alt="Medium Badge" src="https://img.shields.io/badge/Medium-%23bf8700?style=for-the-badge">
	<img alt="Data Structures Badge" src="https://img.shields.io/badge/Data%20Structures-%238250df?style=for-the-badge">
</p>

After a long time saving money, Rafael finally got to buy his own car. Enough of catching bus, now his life is going to be easier. At least this is what he thought, until he heard about the parking lot near the university where he decided to park the car every day.
The parking lot has only one corridor, with enough width to fit one car, and enough depth to fit `K` cars, one behind the other. As this parking lot has just one gate, it is only possible to the cars to enter and leave by it.
When the first car enters the parking, it occupies the last position near the wall, at the bottom of the parking lot. All the next cars park right behind it, forming a queue. Obviously, it is not possible that one car passes over the other, therefore it is only possible for a car to leave the parking lot if it is the last at the queue.
Given the expected arrival and exit time of `N` drivers, Rafael included, tell if it is possible that they all can park and remove their cars at the quote parking lot.

> ### Input
> There will be several test cases. Each test case starts with two integers $N$ $(3 ≤ N ≤ 10⁴)$ and $K$ $(1 ≤ K ≤ 10³)$, representing the number of drivers that are going to make use of the parking lot, and the number of cars that the parking lot can fit, respectively.
> Following there will be `N` lines, each one containing two integers $C_i$ and $S_i$ $(1 ≤ Ci, Si ≤ 10⁵)$, representing, repectively, the arrival and exit time of the i-th driver $(1 ≤ i ≤ N)$. The values of $C_i$ are given in ascending order, in other words, $C_i < C_{i+1}$ for each $1 ≤ i < N$.
> 
> There will be no more than one driver that arrive at the same time, and no more than one driver that leave at the same time. It is possible that one driver can park at the same time that other driver is leaving.
>
> The last test case is indicated when `N = K = 0`, which should not be processed.

> ### Output
> For each test case print one line, containing the word `Sim`, if it is possible that all the `N` drivers make use of the parking lot, or `Nao` otherwise.

## 💡 Solution Explanation
This problem can be solved using a queue. We will simulate the parking lot, and for each car that arrives, we will check if there is space and if the time is possible.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>