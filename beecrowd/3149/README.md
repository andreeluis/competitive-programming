# [3149 - The Clover Bride](https://www.beecrowd.com.br/repository/UOJ_3149_en.html)

<p>
	<img alt="Medium Badge" src="https://img.shields.io/badge/Medium-%23bf8700?style=for-the-badge">
	<img alt="Sort Badge" src="https://img.shields.io/badge/Sort-%238250df?style=for-the-badge">
</p>

There is a famous story in the city of Muzambinho of a bride who appears at the clover at the entrance to the city always close to midnight.
Many residents of the city have already reported that they saw the bride, but there is no consensus as to what is the right time for her to appear, mainly because everyone says they saw "close to midnight".
Toguro, a great scholar of supernatural events, is trying to organize the residents' reports and see if there are any true reports.
As a "close to midnight" time can be either a few minutes before or a few minutes later, Toguro asked for your help to create an algorithm that given the `P` value of minutes to be considered before and after midnight, the name of the resident and the time of the alleged sighting, show in an orderly manner the sightings that can be cataloged as true reports.

> ### Input
> The first line of the entry contains an integer `P` representing the value close to midnight plus and minus and an integer `Q` representing the number of people who reported the sighting.
> 
> In the next `Q` lines, two strings `H` and `N` will be read, indicating the reporting time and the name of the resident, respectively.
>
> **Limits:**
> - $1 ≤ P ≤ 59$;
> - $1 ≤ Q ≤ 1000$;
> - $23:01 ≤ H ≤ 00:59$;
> - $1 ≤ | N | ≤ 100$;

> ### Output
> The output should be the name of the residents who had the report as true ordered by the time they saw it.
> **Note:** sightings before midnight occurred earlier than sightings after midnight. In case of sightings at the same time the order of registration of the sighting must be considered, that is, the sighting that was registered first must appear first, and so on.

## 💡 Solution Explanation
To solve this problem, the sightings must be sorted by time and then filtered by the time considered close to midnight `P`.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>
