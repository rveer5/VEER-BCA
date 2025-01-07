/*
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. 
No two mapped values can have the same key values.like <1,a> 
keys will be unique but values can be duplicate.
functions:
begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
max_size() – Returns the maximum number of elements that the map can hold.
empty() – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.
erase(const g)– Removes the key-value ‘g’ from the map.
clear() – Removes all the elements from the map.

syntax = ""  unordered_map<int, int> gquiz1; ""

unordered map are also known as hash maps.
for (auto t : mymap) {
            result.push_back({t.first, t.second});  // {value, total weight}
        } This is how we insert into vector from map
        vector should be like vector<vector<int>> because when we enter from map to vector it should be in pair.
*/