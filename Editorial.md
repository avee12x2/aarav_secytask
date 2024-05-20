# Editorial - 

This problem can be solved based on the greedy algorithm approach.

We have to find a criteria by which we can start assigning rooms and roommates to the students. For this purpose, first we define a structure Person to store the data regarding all the different data points of a particular person.

Now, to find a criteria by which we can allocate rooms to the students, some data points are very important. First of which is the prefby value which is the count of the number of students whose roommate preference is our particular student. This value indicates the demand of that stusent as a roommate. Hence, when we first start allocating rooms, we have to allocate rooms to those students first, which have high prefby value. This also ensures that the student who has high prefby value has more chances of getting a triple room and hence increasing chances of satisfying more students.

But now we have another hurdle. What next? What of students who have high prefby value? With whom should they be allocated? We deal with this situation by another greedy algorithm approach. For each of these students who have high prefby value, we will allocate roommate having the least prefby value. Why so? This is because in this way we will dissatisfy the least number of people possible.

See here our overall approach when allocating a room to someone is to minimize the number of dissatisfactions it might lead to other students in the future.
