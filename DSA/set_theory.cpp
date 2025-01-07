    //ordered set
/* ->It is also a data structure.
->Set stores unique values.
->duplicate values are not allowed.
->Addition and deletion is possible but modification is not allowed.
->syntax= "" set<int> s; "".
->Functions:
insert() //inserts values in set.
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty.
find(const g)	Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to the end.
emplace()	This function is used to insert a new element into the set container, 
only if the element to be inserted is unique and does not already exist in the set.




->It sort values itself like if we enter ex=3,2,1 output will be 1,2,3.
->if we create set like this "" set<int>,greater<int>>  "" values will be stored in decreasing order.
->Time complexity will be O(log n).
*/ 

//unordered set
/* also stores unique elements but not have and order like orderset.
 and functions are same as orderedset.
 syntax== "" unordered_set<data_type> name;  ""
*/