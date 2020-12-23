//Some of the member functions of vectors , array , set,list,pair,map, are:


//at(): Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator). Its time complexity is O(1).
//back(): Returns the reference to the last element. Its time complexity is O(1).
//begin(): Returns an iterator pointing to the first element of the vector. Its time complexity is O(1).
//clear(): Deletes all the elements from the vector and assign an empty vector. Its time complexity is O(N) where N is the size of the vector.
//empty(): Returns a boolean value, true if the vector is empty and false if the vector is not empty. Its time complexity is O(1).
//end(): Returns an iterator pointing to a position which is next to the last element of the vector. Its time complexity is O(1).
//erase(): Deletes a single element or a range of elements. Its time complexity is O(N + M) where N is the number of the elements erased and M is the number of the elements moved.
//front(): Returns the reference to the first element. Its time complexity is O(1).
//insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) where N is the number of elements inserted and M is the number of the elements moved .
//pop_back(): Removes the last element from the vector. Its time complexity is O(1).
//push_back(): Inserts a new element at the end of the vector. Its time complexity is O(1).
//resize(): Resizes the vector to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of the resized vector.
//size(): Returns the number of elements in the vector. Its time complexity is O(1).
//lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
//upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.
//arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
//arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
//next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
//prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
//binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
//*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
//*min_element (first_iterator, last_iterator) – To find the minimum .\element of a vector.
//accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
//sort(first_iterator, last_iterator) – To sort the given vector.
//reverse(first_iterator, last_iterator) – To reverse a vector.
//distance(first_iterator,desired_position)
//vect.erase(unique(vect.begin(),vect.end()),vect.end());
//substr
//count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
//find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector.
//iota() This function is used to assign continuous values to vector/array. This function accepts 3 arguments, begin address, end address, and the starting number.
//copy_n() copies one array elements to new Vector/array. This type of copy creates a deep copy of vector/array. This function takes 3 arguments, begin address, v.end() ,  and the target vector/array name.
//all_of() //any_of()//none_of() // these three is used to check any property on whole array elements , like if any element is negative , or all are positive , and like wise .. details are on gfg
//auto it = set_intersection(nums1.begin(),nums1.end(), nums2.begin(), nums2.end(),v.begin());
//returns iterator at the end of the range // this is used to find the intersection between two sets
//The vector::capacity() function is a built-in function which returns the size of the storage space currently allocated for the vector, expressed in terms of elements. This capacity is not necessarily equal to the vector size. It can be equal to or greater, with the extra space allowing to accommodate for growth without the need to reallocate on each insertion
//vector<int> newVec; // note1 here newVec size is not initialized;////copy(vec.begin(),vec.end(),back_inserter(newVec))//////;//see note 1 and then using back_inserter this copy is possible

// pair (data_type1, data_type2) Pair_name; // functions are make_pair() , pair1,swap(pair2)
// iterator // prev() , next() , advance() , inserter()
//transform(vect.begin(), vect.end(),target.begin(), operation func); it is used perform any operation on every element of vector or array
// Single line code to add arr1[] and arr2[] and store result in res[] -> transform(arr1, arr1+n, arr2, res, plus<int>());
//inplace_merge(oa.begin(),oa.begin()+na,oa.end()); inplace merge sort
