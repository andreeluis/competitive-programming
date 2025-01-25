# [1215 - Andy's First Dictionary](https://www.beecrowd.com.br/repository/UOJ_1215_en.html)

<p>
	<img alt="Medium Badge" src="https://img.shields.io/badge/Medium-%23bf8700?style=for-the-badge">
	<img alt="String Badge" src="https://img.shields.io/badge/String-%238250df?style=for-the-badge">
</p>

Andy has a dream - he wants to produce his very own dictionary. This is not an easy task for him, as the number of words that he knows is, well, not quite enough. Instead of thinking up all the words himself, he has a briliant idea. From his bookshelf he would pick one of his favourite story books, from which he would copy out all the distinct words. By arranging the words in alphabetical order, he is done! Of course, it is a really time-consuming job, and this is where a computer program is helpful.
You are asked to write a program that lists all the different words in the input text. In this problem, a word is defined as a consecutive sequence of alphabets, in upper and/or lower case. Words with only one letter are also to be considered. Furthermore, your program must be case insensitive. For example, words like `Apple`, `apple` or `APPLE` must be considered the same.

> ### Input
> The input file is a text with no more than 10000 lines. An input line has at most 200 characters. Input is terminated by `EOF`.

> ### Output
> Your output should give a list of different words that appears in the input text, one in a line. The words should all be in lower case, sorted in alphabetical order. You can be sure that the number of distinct words in the text does not exceed 5000.

## 💡 Solution Explanation
This problem can be solved by reading the input text line by line, extracting words from each line, converting them to lowercase, filtering out non-alphabetic characters, and storing them in a set to remove duplicates and sort them in alphabetical order. Finally, the sorted set can be printed line by line.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>
