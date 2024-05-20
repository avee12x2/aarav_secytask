# Editorial - 

This problem can be solved based on the greedy algorithm approach.

We have to find a criterion by which we can start assigning rooms and roommates to the students. For this purpose, first we define a structure **Person** to store the data regarding all the different data points of a particular person.

Now, to find an algorithm by which we can allocate rooms to the students, some data points are very important. First of which is the **prefby** value which is the count of the number of students whose roommate preference is our particular student. This value indicates the demand of that stusent as a roommate. Hence, when we first start allocating rooms, we have to allocate rooms to those students first, which have high **prefby** value. This also ensures that the student who has high **prefby** value has more chances of getting a triple room and hence increasing chances of satisfying more students.

But now we have another hurdle. What next? What of students who have high **prefby** value? With whom should they be allocated? We deal with this situation by another greedy algorithm approach. For each of these students who have high **prefby** value, we will allocate roommate having the least **prefby** value. Why so? This is because in this way we will dissatisfy the least number of people possible.

See, here our overall approach when allocating a room to someone is to minimize the number of dissatisfactions it might lead to other students in the future.

Hence, to implement the above approach, we take the help of the **wantedby** vector member of **Person** to store the id's of students preffering a particular student along with their **prefby** value, and the set **s** to store the store these preferences in the order of the criterion we have designed above.

However, before we start allocating rooms based on this algorithm, we have to check for "Perfect Matches". These are pairs where both students prefer to have each other as roommates. These "Perfect Matches" will always be roommates you would think. However, that might not always be the most optimal solution. To check for this, we check for the number of people this room allocation will dissatisfy and act accordingly.

Well, now that we have our "Perfect Matches" in order, we start with our "Greedy Algorithm" to allocate rooms. In each step we go about checking for already allocated or allocated in double room students and allocate accordingly.

Also, note that we first allocate rooms not knowing which would be converted to triple. After the maximum rooms have been exhausted, we start converting double roomsto triple by allocating the yet unallocated to these rooms. Here too, we try to allocate rooms based on preferences so that maximum number of students may be satisfied.

Thus, by soome elaborate algorithmic techniques and manipulation of huge sets of data, we arrive at our answer, the maximum number of people that can be satisfied.


**Time Complexity**: ###### O(log n)
