# [2187 - Bits Exchanged](https://www.beecrowd.com.br/repository/UOJ_2187_en.html)

<p>
	<img alt="Easy Badge" src="https://img.shields.io/badge/Easy-%231a7f37?style=for-the-badge">
	<img alt="Greedy Algorithm Badge" src="https://img.shields.io/badge/Greedy%20Algorithm-%238250df?style=for-the-badge">
</p>

The Weblands Islands form an independent kingdom in the Pacific seas. As a new kingdom, the society is greatly influenced by computers. The official currency is the Bit, and there are notes of **B$ 50**, **B$ 10**, **B$ 5**, and **B$ 1**. You have been hired to assist in the programming of the ATMs for a large bank in the Weblands Islands.

The ATMs in the Weblands Islands operate with all types of available notes, maintaining a stock of each value (**B$ 50**, **B$ 10**, **B$ 5**, and **B$ 1**). Bank customers use ATMs to make withdrawals of a certain integer amount in Bits.

Your task is to write a program that, given the Bit value desired by the client, determines the number of each type of note required for this total value to minimize the number of delivered bills. For example, if the customer wishes to withdraw **B$ 50**, simply deliver a note of fifty Bits. If the client wishes to withdraw **B$ 72**, it is necessary to deliver a note of **B$ 50**, two of **B$ 10**, and two of **B$ 1**.

> ### Input
> The input is composed of multiple test sets. Each test set is composed of a single line that contains a positive integer number $V$ $(0 ≤ V ≤ 10000)$, indicating the amount requested by the customer. The end of the input is indicated by `V = 0`.

> ### Output
> For each test set of the input, your program must produce three lines in the output.
> - The first line must contain a test set identifier in the format `Teste n`, where `n` is numbered from 1.
> - The second line must contain 4 integers `I`, `J`, `K`, and `L` that represent the result found by your program:
>   - `I` indicates the number of **B$ 50** notes,
>   - `J` indicates the number of **B$ 10** notes,
>   - `K` indicates the number of **B$ 5** notes,
>   - and `L` indicates the number of **B$ 1** notes.
> - The third line must be left blank.

## 💡 Solution Explanation
This problem is a classic example of a greedy algorithm, where the locally optimal choice (using the largest banknote) leads to a globally optimal solution (minimum number of banknotes).

This problem can be efficiently solved using a greedy algorithm. The goal is to minimize the number of banknotes needed to represent a given amount by always choosing the largest possible banknote first.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>