# Problem Statement
## Enchanted IIT

Hermione, a dear friend of yours, is a student at Enchanted IIT, a magical institute renowned for its wizardry and witchcraft. She has recently completed her first year at the institute and is now ready to begin her second year. However, she must first deal with a peculiar situation.

As happens every year, the students move from their old hostels to new ones, and the challenge of reallocating students to different rooms arises. Being the house representative for Gryffindor, Hermione has been tasked with this responsibility by the House Headmaster. The task is as follows:

In a single wing, she has to allocate rooms and roommates to **n** students. The wing consists of **x** triple rooms and **y** double rooms such that **3x+2y=n**. This equation ensures that there will be no empty places after every student has been allocated a room. Being the kind-hearted person that Hermione is, she asks each of the **n** students for their preference regarding their preferred roommate.

However, as she begins working on the problem of finding the best possible arrangement that would satisfy the greatest number of students, she realizes it would take too much of her time and that she would not be able to complete the task on time. So, she turns to you for help.

Your task, for a particular wing, is to determine the maximum number of students that can be satisfied by an arrangement.

### Input:
The first line contains a single integer __t__ (1 $\le$ t $\le$ 20) — the number of test cases.

The first line of each test case contains **n** (2 $\le$ n $\le$ 1000) – the number of students in a wing.

The second line of each test case consists of two integers **x** and **y** – the number of triple and double rooms respectively such that **3x+2y=n**.

The third line consists of n space separated integers $a_{i}$ (1 $\le$ $a_{i}$ $\le$ n) – the roommate preferences of the students where $a_{i}$ denotes the preference of the $i^{th}$ student.

### Output:
For each test case, output on a new line, a single integer denoting the maximum number of people you can satisfy.

### Examples:
#### Imput:
2

5<br>
1 1<br
4 5 1 5 2<br>

13<br>
3 2<br>
4 4 4 7 1 5 5 5 3 7 8 2 8<br>

#### Output:
4<br>
8


